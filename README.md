[![N|Solid](https://cldup.com/dTxpPi9lDf.thumb.png)](https://nodesource.com/products/nsolid)

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://travis-ci.org/joemccann/dillinger)
# Simple_Shell Project
<a name="top"></a>
# SHELL'S BELLS !
Welcome to the `Robert-Martin Simple Shell Project` this shell can be compiled and run from the command line, it includes basic features, as well as some advanced features found in most shell programs.

## Table of contents
* [Quick Start](#item1)
* [Syntax](#item2)
* [Example Usage](#item3)
* [Builtins](#item4)
* [Files](#item5)
 
<a name="item1"></a>
### Quick Start
 - git clone this repository to your local machine.
 ```sh
 $ git clone https://github.com/sebascastel/simple_shell
 ```
 - `cd` into `simple_shell/` directory. 
```sh
$ cd simple_shell/
```
 - Compile the program.
```sh 
 $ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
or
```sh
$ make 
```
- Execute the Shell's Bells !
```sh
$ ./hsh
```
Note: **Shell's Bells** can also be run in non-interactive mode:
```sh
$ echo "/bin/ls" | ./hsh
```

<a name="item2"></a>
### Syntax
This Shell, has a familiar syntax when running commands, as other common Shells:
 ```s
 †Shell's Bells† <command> <flags>
 ```
 
 - non-interactive mode:
 ```sh
 $ echo "<command>" | ./hsh
 ```
 <a name="item3"></a>
 ### Example Usage
 interactive mode
  - `ls` command:
 ```s
 †Shell's Bells† ls -1
 ``` 
 - `pwd`command:
 ```s
 †Shell's Bells† pwd
 ``` 
 - `cd` command:
 ```s
 †Shell's Bells† cd ..
 ``` 
 - `help` command:
 ```s
 †Shell's Bells† help <builtin command>
 ``` 
 - `# comments`
  ```s
 †Shell's Bells† echo Hello # World
 Hello
 ``` 
 <a name="item4"></a>
### Builtins

Our Shell supports a variety of builtin commands:  

`exit` - exits the Shell  

`env` - prints the environment variables.  

`setenv` - sets an environment variable.  

`unsetenv` - unsets an environment variable.  

`cd` - changes directory.  

`help` - displays help for builtin commands.  

#### Bonus
`welcome` - displays a welcome message :smile:  

`bart` - shows Bart Simpson :smile:
 
 [Back to Top](#top)
 
