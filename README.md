# binarysearch

This set of programs and scripts asks user some questions and guesses their number.

### C
To run this C program, you need gcc and make. You can always compile it without make by using (in 'c' folder)
```sh
$ gcc -o binarysearch code/make.c code/binsort.c
```
It uses a defined struct as a class. Elements are defined in bs_local.h, but methods are in binsort.c. Works in console. Calls guess() for all questions and result.

### Java
I already compiled Java. To run the app, cd to build and use 
```sh
$ java binarysearch.BinarySearch
```
Also make sure you *have* Java installed.
It uses binarysearch.searcher.BinSearcher class (object actually) and prints getGuessedValue. The class itself asks user some questions in console.

### JavaScript
There's a class that returns the result after a few confirmation dialogues. You just need to add script tag, create a new BinarySearch object and get guessed number using guess(). You can also use html file for demo.

### Python
You need to run it with Python 3. Simply use:
```sh
$ python3 binarysearch.py
```
It creates an object from BinarySearch class and prints getGuessed() result. Also asks a couple of questions in console.


License
----

GNU General Public License v2.0. See [LICENSE](https://github.com/SudoWaster/binarysearch/blob/master/LICENSE) file.
