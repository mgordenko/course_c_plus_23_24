## Working with files

To make your program "see" the files you want to use, you need to properly set the path to them. This can be done in several ways.

### Relative path

Relative path is a path that is set in relation to some given directory. For example, if this given directory is `workshops5-6/data`, and you want to open the file `workshops5-6/data/problem8_files/inp.txt`, the relative path is `problem8_files/inp.txt`.

This "given directory" is the working directory of your program. By default it is the directory with your executable file, something similar to `workshops5-6/code/build-src-Desktop-Debug/`. If you place the file you want to read into this directory, the relative path will be just `filename.txt`.

In addition, you can set the working directory of your program when you run it. If, for example, you are using Qt Creator, you can do it in "Projects - Run - Working directory". This way you can separate your executable from the data.

### Absolute path

One way to make sure the path works for you personally is to locate the file you need and use the full path to this file in the program. This is the absolute path, it does not change depending on your working directory.

However, using absolute paths is rarely a good idea, as it is implied that this path will never change. So your program will stop working if you move the directory with your project somewhere else. This becomes extremely important if you want to share your program or your code, so it is rarely seen in a production environment, outside of special expectional cases.  
If you ever decide to use an absolute path, you should set it as a named constant and make sure to write comments in the code about it.
