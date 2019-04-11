#include "holberton.h"

void set_alias(char *var_name, char *value)
{
	alias_t *temp = aliases;
	int len, j, k;
	char *new_value;

	*value = '\0';
	value++;
	len = _strlen2(value) - _strspn(value, "'\"");
	new_value = malloc(sizeof(char) * (len + 1));
	if (!new_value)
		return;
	for (j = 0, k = 0; value[j]; j++)
	{
		if (value[j] != '\'' && value[j] != '"')
			new_value[k++] = value[j];
	}
	new_value[k] = '\0';
	while (temp)
	{
		if (_strcmp2(var_name, temp->name) == 0)
		{
			free(temp->value);
			temp->value = new_value;
			break;
		}
	temp = temp->next;
	}
	if (!temp)
		add_alias_end(&aliases, var_name, new_value);
}

void print_alias(alias_t *alias)
{
	char *alias_string;
	int len = _strlen2(alias->name) + _strlen2(alias->value) + 4;

	alias_string = malloc(sizeof(char) * (len + 1));
	if (!alias_string)
		return;
	_strcpy(alias_string, alias->name);
	_strcat2(alias_string, "='");
	_strcat2(alias_string, alias->value);
	_strcat2(alias_string, "'\n");
	write(STDOUT_FILENO, alias_string, len);
	free(alias_string);
}

char **replace_aliases(char **args)
{
	alias_t *temp;
	int i;
	char *new_value;

	if (_strcmp2(args[0], "alias") == 0)
		return (args);
	for (i = 0; args[i]; i++)
	{
		temp = aliases;
		while (temp)
		{
			if (_strcmp2(args[i], temp->name) == 0)
			{
				new_value = malloc(sizeof(char) * (_strlen2(temp->value) + 1));
				if (!new_value)
				{
					free_args(args, args);
					return (NULL);
				}
				_strcpy(new_value, temp->value);
				free(args[i]);
				args[i] = new_value;
				i--;
				break;
			}
			temp = temp->next;
		}
	}
return (args);
}

int _alias(char **args, char __attribute__((__unused__)) **front)
{
	alias_t *temp = aliases;
	int i, ret = 0;
	char *value;

	if (!args[0])
	{
		while (temp)
		{
			print_alias(temp);
			temp = temp->next;
		}
	return (ret);
	}
	for (i = 0; args[i]; i++)
	{
		temp = aliases;
		value = _strchr(args[i], '=');
		if (!value)
		{
			while (temp)
			{
				if (_strcmp2(args[i], temp->name) == 0)
				{
					print_alias(temp);
					break;
				}
			temp = temp->next;
			}
		if (!temp)
			ret = 0;
		}
		else
			set_alias(args[i], value);
	}
return (ret);
}
