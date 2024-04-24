
# Qt

Qt Widgets applications introduce several new topics and concepts.

1. Qt language additions to C++. Classes `QObject`, `QList`, `QString`, etc.
2. UI designer.
3. Widgets and their hierarchy.

A brief guide on how to install Qt libraries: https://github.com/dsba-z/cpp-install-guide/blob/master/qt-guide.md

You may install Qt Creator or just base libraries.
# UI design

There are two main ways to design user interface in Qt.

1. (Default) Use Qt Designer, graphically modify a .ui file, convert it to code and connect it to your project.
2. Use code directly.

In example projects and in the default Qt Widgets project you have a file `mainwindow.ui`. This file describes user interface of your program, and it can be modified using graphical tools: dragging and dropping buttons, moving them around.

When you build your project, this file gets converted to a C++ code file `ui_mainwindow.h`. You can see the C++ file getting included in `mainwindow.cpp`.

By default, all interface elements are child object of the root element `ui`. The line `ui->setupUi(this);` connects your code (`mainwindow.cpp`) and generated UI code (`ui_mainwindow.h`).

After you run this line, you can access UI elements like this;

```cpp
    QString buttonText = ui->myButton->text();
```

This line accesses a button object called "myButton" and calls its method `text()`. The method returns the button's label which is then saved to a variable `buttonText`.

If you want to change the label, you can do it in code:

```cpp
    ui->myButton->setText("Click me!");
```

You can use such code to set up all the UI elements instead of using Designer.

# Widgets

Qt Widgets have a parent-child hierarchy. Every widget except the main window itself has a parent. Every time you add a new button or a new label, you don't just add it to your whole application. Instead, you place it in its container, which is the parent.

When you add a new widget, you must specify its parent. When the parent is destroyed (for example, a window or a tab is closed), all its children are also destroyed. This way you don't have to manually free memory of every widget, it is managed automatically.


# Tasks

## Task 1. Hello, world.

Examine the project ex1_hello_world or create a new Qt Widgets project.

### Designer

Modify the interface using Qt Designer. Add a button and change its label text.

### Code

Modify the interface using code. Change some text (button label, text label, window title) to something else.

Change font size for the text label to 10.

To change font size:

1. Save current font to a `QFont` variable with the method `->font()`.
2. Use `setPointSize()` to change its size.
3. Use `setFont(newFont)` on the label to set the new font.

## Task 2. Rendering.

### Introduction

Examine the project ex2_cantor. This project contains several new concepts:

1. Defining your own custom widgets - `RenderArea`.
2. Drawing - `QPainter`.
3. User interactions - signals and slots.


`RenderArea` is a new class derived from `QWidget`. Whenever you need to make a custom version of a standard widget, you can make a new class like this.

Generally, it's better to choose the closest base widget to the class you want to define. For example, derive a class from `QPushButton` if you want to make a custom button class, or from `QLineEdit` if you want to make an input field with a single line of text.  
In this case it's a `QWidget`, so it's a general purpose widget.

When you make your class, you must make a constructor that takes `QWidget* parent` as input, so you can add your class to the parent-child UI hierarchy.

As your class is a custom one, it doesn't exist in Designer, so you can only add it to the program through code, manually.

A `QPainter` object can be used to draw graphical primitives (lines, rectangles, circles) in Widgets. There is an example in `renderarea.cpp` that draws two levels of the Cantor fractal.


### Tasks

#### 2.1

Make a function `drawCantor(...)` that draws a specified number of levels of the Cantor fractal. Replace the existing drawing code with the function.

#### 2.2

Make a variable field in `RenderArea` that controls the height of the rectangles in the fractal.

Test that changing this variable (in the code itself) changes how the fractal is drawn.

#### 2.3 (Extra)

Add another SpinBox widget that will control the height of the rectangles in the fractal.

Use signals and slots to connect spin box widgets with their respective variables.

Test that you can change the appearance of the fractal by interacting with spin boxes.

**Add limits on spin box inputs. Maximum number of levels should be 4-5. Maximum size should allow the fractal to fit the window. Size and levels can't be negative.**


