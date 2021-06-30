/*******************************************************************************
* Macro Keypad - OS Independant
* June 2021 Jayne Atkinson
* 
* GNU General Public License V3.0
*
* Intended as a starting point for anyone to make their own macro keypad
*
*
*******************************************************************************/



#include <Keypad.h>
#include <Keyboard.h>

const byte ROWS = 5; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char macboard[ROWS][COLS] = {
  {1,2,3,4},
  {5,6,7,8},
  {9,10,11,12},
  {13,14,15,16},
  {17,18,19,20}
};
byte rowPins[ROWS] = {8, 7, 6, 5, 4}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {10, 9, 3, 2}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(macboard), rowPins, colPins, ROWS, COLS); 

void setup(){
  Keyboard.begin();
}
  
void loop()
{
  char customKey = customKeypad.getKey();  // Check if any keys pressed
  if (customKey)
  {
    switch(customKey)
    {
      // Many of the macros are AutoCAD oriented, as that's why I created this :-)

      // The escape key, super important
      case 1:
      Keyboard.write(177);  // can probably use KEY_ESC in place of 177
      break;

      // Brings up the properties tool
      case 2:
      Keyboard.print("properties\n");
      break;

      //The pipeadd command in MEP
      case 3:
      Keyboard.print("pipeadd\n");
      break;

      // Sets the pipe size to DN40
      case 4:
      Keyboard.print("size\n40\n");
      break;
      
      // Measures distance
      case 5:
      Keyboard.print("mea\nd\n");
      break;
  
      // Measures Area   
      case 6:
      Keyboard.print("mea\nar\n");
      break;

      // Sets the pipe size to DN15
      case 7:
      Keyboard.print("size\n15\n");
      break;

      // Sets the pipe size to DN50
      case 8:
      Keyboard.print("size\n50\n");
      break;

      //brings up the standard Windows calculator. I'm sure there's an actual key for doing that but meh...
      case 9:
      Keyboard.write(KEY_LEFT_GUI);
      delay(100);
      Keyboard.print("calc");
      delay(100);
      Keyboard.write(KEY_RETURN);
      break;

      // A special macro that brings up a command line window and starts a batch file. Automates something for ham radio :-)
      case 10:
      Keyboard.write(KEY_LEFT_GUI);
      delay(200);
      Keyboard.print("cmd");
      delay(200);
      Keyboard.write(KEY_RETURN);
      delay(500);     
      Keyboard.print("adifpush.bat\n");
      break;

      // Sets the pipe size to DN20
      case 11:
      Keyboard.print("size\n20\n");
      break;
      
      // Sets the pipe size to DN65      
      case 12:
      Keyboard.print("size\n65\n");
      break;
      
      // Visual Style = 2d Wireframe
      case 13:
      Keyboard.print("vs\n2\n");
      break;
      
      // Visual Style = 3d Wireframe
      case 14:
      Keyboard.print("vs\nw\n");
      break;
      
      // Sets the pipe size to DN25      
      case 15:
      Keyboard.print("size\n25\n");
      break;

      // Sets the pipe size to DN80      
      case 16:
      Keyboard.print("size\n80\n");
      break;
      
      // Visual Style = 3d Hidden Lines
      case 17:
      Keyboard.print("vs\nh\n");
      break;
      
      // Visual Style = Realistic
      case 18:
      Keyboard.print("vs\nr\n");
      break;
      
      // Sets the pipe size to DN32      
      case 19:
      Keyboard.print("size\n32\n");
      break;
      
      // Sets the pipe size to DN100      
      case 20:
      Keyboard.print("size\n100\n");
      break;

      default:
      break;
    }
  }
}
