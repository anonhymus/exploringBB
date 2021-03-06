/* A program for a simpleQt application
* Written by Derek Molloy for the book "Exploring BeagleBone: Tools and 
* Techniques for Building with Embedded Linux" by John Wiley & Sons, 2014
* ISBN 9781118935125. Please see the file README.md in the repository root 
* directory for copyright and GNU GPLv3 license information.            */

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[ ])
{
   QApplication app(argc, argv);
   QLabel label("Hello BeagleBone!");
   label.resize(200, 100);
   label.show();
   return app.exec();
}
