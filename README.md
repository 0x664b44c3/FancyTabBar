# FancyTabBar

## Usage
You can use the code as a submodule in your git project.
To do so:
```$ git submodule add https://github.com/pcogermany/FancyTabBar.git```

Then include fancytabbar.h like this in your widget or mainwindow
```#include <fancytabbar.h>```
and instantiate an object:
```FancyTabBar ftb=new FancyTabBar(FancyTabBar::Left, this);```
The first parameter of the constructor tells the FancyTabBar where it shall be located (have a look at the example).

Be sure to add the FancyTabBar to your layout of the widget.

You can add tabs to the FancyTabBar like this:
```ftb->insertTab(0, QIcon(":/tab_orders"), tr("Orders"));```

## Example
If you would like to build the example, just clone the repository (in case you haven't done this)
```$ git clone https://github.com/pcogermany/FancyTabBar.git```
and open the project file (example/FancyTabBar.pro) in QtCreator.

This is what the FancyTabBar looks like on all four edges:

![screenshot](https://raw.github.com/benadler/FancyTabBar/master/screenshot.png "Screenshot")

## License
As the code was part of QtCreator (licensed under either proprietary license or LGPL), the licenses for this remain the same:
 - [Digia/Qt Commercial License](http://qt.digia.com/licensing)
 - [GNU Lesser General Public License version 2.1](http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html)

## Infos/Changes
benadler:
 - ripped out of QtCreator's codebase on 2012-10-06
 - removed a load of dependencies,
 - removed the corner and progress widgets (at the bottom in QtCreator's TabBar),
 - enabled placement on left, right, top, bottom edges (instead of just left)
 - created a small demo program to show it off

pcogermany:
 - moved files to be able to use this as a git submodule
 - bugfixes to be able to build it using MS VS2008 compiler
 - added function to set the tab text at runtime
