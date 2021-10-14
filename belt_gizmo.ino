//---------------------------------------------------------------------------------------------------------
//NeoPixel Information for initializing the strip, below
//  60ma/pixel for current load
//  Parameter 1 = number of pixels in strip
//  Parameter 2 = pin number (most are valid)
//  Parameter 3 = pixel type flags, add together as needed:
//    NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//    NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//    NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//**********************************************************************************************************/

#include <Adafruit_NeoPixel.h>

// neopixel pins / setup
#define NEO_PIXELS 6
Adafruit_NeoPixel NeoPixels = Adafruit_NeoPixel(31, NEO_PIXELS, NEO_GRB + NEO_KHZ800);

// Color set #0
int r0 = 0;
int g0 = 0;
int b0 = 0;

// Color set #1
int r1 = 255;
int g1 = 0;
int b1 = 0;

// Color set #2
int r2 = 255;
int g2 = 64;
int b2 = 0;

// Color set #3
int r3 = 255;
int g3 = 128;
int b3 = 0;

// Color set #4
int r4 = 255;
int g4 = 192;
int b4 = 0;

// Color set #5
int r5 = 255;
int g5 = 255;
int b5 = 0;

// Color set #6
int r6 = 192;
int g6 = 255;
int b6 = 0;

// Color set #7
int r7 = 128;
int g7 = 255;
int b7 = 0;

// Color set #8
int r8 = 64;
int g8 = 255;
int b8 = 0;

// Color set #9
int r9 = 0;
int g9 = 255;
int b9 = 0;


// inputs for switches and buttons
const int button = 4;

int mode = 0;
int reading;
int previous = LOW;

// Arduino setup function
void setup() {

  // configure neo pixels
  NeoPixels.begin();
  NeoPixels.setBrightness(255);
  NeoPixels.show(); // Initialize all pixels to 'off'

  // set the modes for the switches/buttons
  pinMode(button, INPUT);
  digitalWrite(button, HIGH);

}


/* ************* Main Loop ************* */

void loop() {

  setLightsState(0);

}

/* ************* Lights States************* */
void setLightsState(int state)
{
  switch ( state )
  {

    case 0: //red to green
      {
        {
          NeoPixels.setPixelColor(8, r1, g1, b1 );
        }
        {
          NeoPixels.setPixelColor(7, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(6, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(5, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(4, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(3, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(2, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(1, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(0, r0, g0, b0 );
        }
        NeoPixels.show();
        delay (300);
      }
      {
        {
          NeoPixels.setPixelColor(8, r2, g2, b2 );
        }
        {
          NeoPixels.setPixelColor(7, r2, g2, b2 );
        }
        {
          NeoPixels.setPixelColor(6, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(5, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(4, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(3, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(2, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(1, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(0, r0, g0, b0 );
        }
        NeoPixels.show();
        delay (100);
      }
      {
        {
          NeoPixels.setPixelColor(8, r3, g3, b3 );
        }
        {
          NeoPixels.setPixelColor(7, r3, g3, b3 );
        }
        {
          NeoPixels.setPixelColor(6, r3, g3, b3 );
        }
        {
          NeoPixels.setPixelColor(5, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(4, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(3, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(2, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(1, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(0, r0, g0, b0 );
        }
        NeoPixels.show();
        delay (100);
      }

      {
        {
          NeoPixels.setPixelColor(8, r4, g4, b4 );
        }
        {
          NeoPixels.setPixelColor(7, r4, g4, b4 );
        }
        {
          NeoPixels.setPixelColor(6, r4, g4, b4 );
        }
        {
          NeoPixels.setPixelColor(5, r4, g4, b4 );
        }
        {
          NeoPixels.setPixelColor(4, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(3, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(2, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(1, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(0, r0, g0, b0 );
        }


        NeoPixels.show();
        delay (100);
      }

      {
        {
          NeoPixels.setPixelColor(8, r5, g5, b5 );
        }
        {
          NeoPixels.setPixelColor(7, r5, g5, b5 );
        }
        {
          NeoPixels.setPixelColor(6, r5, g5, b5 );
        }
        {
          NeoPixels.setPixelColor(5, r5, g5, b5 );
        }
        {
          NeoPixels.setPixelColor(4, r5, g5, b5 );
        }
        {
          NeoPixels.setPixelColor(3, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(2, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(1, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(0, r0, g0, b0 );
        }


        NeoPixels.show();
        delay (100);
      }

      {
        {
          NeoPixels.setPixelColor(8, r6, g6, b6 );
        }
        {
          NeoPixels.setPixelColor(7, r6, g6, b6 );
        }
        {
          NeoPixels.setPixelColor(6, r6, g6, b6 );
        }
        {
          NeoPixels.setPixelColor(5, r6, g6, b6 );
        }
        {
          NeoPixels.setPixelColor(4, r6, g6, b6 );
        }
        {
          NeoPixels.setPixelColor(3, r6, g6, b6 );
        }
        {
          NeoPixels.setPixelColor(2, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(1, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(0, r0, g0, b0 );
        }


        NeoPixels.show();
        delay (100);
      }

      {
        {
          NeoPixels.setPixelColor(8, r7, g7, b7 );
        }
        {
          NeoPixels.setPixelColor(7, r7, g7, b7 );
        }
        {
          NeoPixels.setPixelColor(6, r7, g7, b7 );
        }
        {
          NeoPixels.setPixelColor(5, r7, g7, b7 );
        }
        {
          NeoPixels.setPixelColor(4, r7, g7, b7 );
        }
        {
          NeoPixels.setPixelColor(3, r7, g7, b7 );
        }
        {
          NeoPixels.setPixelColor(2, r7, g7, b7 );
        }
        {
          NeoPixels.setPixelColor(1, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(0, r0, g0, b0 );
        }


        NeoPixels.show();
        delay (100);
      }

      {
        {
          NeoPixels.setPixelColor(8, r8, g8, b8 );
        }
        {
          NeoPixels.setPixelColor(7, r8, g8, b8 );
        }
        {
          NeoPixels.setPixelColor(6, r8, g8, b8 );
        }
        {
          NeoPixels.setPixelColor(5, r8, g8, b8 );
        }
        {
          NeoPixels.setPixelColor(4, r8, g8, b8 );
        }
        {
          NeoPixels.setPixelColor(3, r8, g8, b8 );
        }
        {
          NeoPixels.setPixelColor(2, r8, g8, b8 );
        }
        {
          NeoPixels.setPixelColor(1, r8, g8, b8 );
        }
        {
          NeoPixels.setPixelColor(0, r0, g0, b0 );
        }


        NeoPixels.show();
        delay (100);
      }

      {
        {
          NeoPixels.setPixelColor(8, r9, g9, b9 );
        }
        {
          NeoPixels.setPixelColor(7, r9, g9, b9 );
        }
        {
          NeoPixels.setPixelColor(6, r9, g9, b9 );
        }
        {
          NeoPixels.setPixelColor(5, r9, g9, b9 );
        }
        {
          NeoPixels.setPixelColor(4, r9, g9, b9 );
        }
        {
          NeoPixels.setPixelColor(3, r9, g9, b9 );
        }
        {
          NeoPixels.setPixelColor(2, r9, g9, b9 );
        }
        {
          NeoPixels.setPixelColor(1, r9, g9, b9 );
        }
        {
          NeoPixels.setPixelColor(0, r9, g9, b9 );
        }


        NeoPixels.show();
        delay (400);
      }

      {
        {
          NeoPixels.setPixelColor(8, r8, g8, b8 );
        }
        {
          NeoPixels.setPixelColor(7, r8, g8, b8 );
        }
        {
          NeoPixels.setPixelColor(6, r8, g8, b8 );
        }
        {
          NeoPixels.setPixelColor(5, r8, g8, b8 );
        }
        {
          NeoPixels.setPixelColor(4, r8, g8, b8 );
        }
        {
          NeoPixels.setPixelColor(3, r8, g8, b8 );
        }
        {
          NeoPixels.setPixelColor(2, r8, g8, b8 );
        }
        {
          NeoPixels.setPixelColor(1, r8, g8, b8 );
        }
        {
          NeoPixels.setPixelColor(0, r0, g0, b0 );
        }


        NeoPixels.show();
        delay (100);
      }

      {
        {
          NeoPixels.setPixelColor(8, r7, g7, b7 );
        }
        {
          NeoPixels.setPixelColor(7, r7, g7, b7 );
        }
        {
          NeoPixels.setPixelColor(6, r7, g7, b7 );
        }
        {
          NeoPixels.setPixelColor(5, r7, g7, b7 );
        }
        {
          NeoPixels.setPixelColor(4, r7, g7, b7 );
        }
        {
          NeoPixels.setPixelColor(3, r7, g7, b7 );
        }
        {
          NeoPixels.setPixelColor(2, r7, g7, b7 );
        }
        {
          NeoPixels.setPixelColor(1, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(0, r0, g0, b0 );
        }


        NeoPixels.show();
        delay (100);
      }

      {
        {
          NeoPixels.setPixelColor(8, r6, g6, b6 );
        }
        {
          NeoPixels.setPixelColor(7, r6, g6, b6 );
        }
        {
          NeoPixels.setPixelColor(6, r6, g6, b6 );
        }
        {
          NeoPixels.setPixelColor(5, r6, g6, b6 );
        }
        {
          NeoPixels.setPixelColor(4, r6, g6, b6 );
        }
        {
          NeoPixels.setPixelColor(3, r6, g6, b6 );
        }
        {
          NeoPixels.setPixelColor(2, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(1, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(0, r0, g0, b0 );
        }


        NeoPixels.show();
        delay (100);
      }

      {
        {
          NeoPixels.setPixelColor(8, r5, g5, b5 );
        }
        {
          NeoPixels.setPixelColor(7, r5, g5, b5 );
        }
        {
          NeoPixels.setPixelColor(6, r5, g5, b5 );
        }
        {
          NeoPixels.setPixelColor(5, r5, g5, b5 );
        }
        {
          NeoPixels.setPixelColor(4, r5, g5, b5 );
        }
        {
          NeoPixels.setPixelColor(3, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(2, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(1, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(0, r0, g0, b0 );
        }


        NeoPixels.show();
        delay (100);
      }

      {
        {
          NeoPixels.setPixelColor(8, r4, g4, b4 );
        }
        {
          NeoPixels.setPixelColor(7, r4, g4, b4 );
        }
        {
          NeoPixels.setPixelColor(6, r4, g4, b4 );
        }
        {
          NeoPixels.setPixelColor(5, r4, g4, b4 );
        }
        {
          NeoPixels.setPixelColor(4, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(3, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(2, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(1, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(0, r0, g0, b0 );
        }


        NeoPixels.show();
        delay (100);
      }
      {
        {
          NeoPixels.setPixelColor(8, r3, g3, b3 );
        }
        {
          NeoPixels.setPixelColor(7, r3, g3, b3 );
        }
        {
          NeoPixels.setPixelColor(6, r3, g3, b3 );
        }
        {
          NeoPixels.setPixelColor(5, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(4, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(3, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(2, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(1, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(0, r0, g0, b0 );
        }
        NeoPixels.show();
        delay (100);
      }
      {
        {
          NeoPixels.setPixelColor(8, r2, g2, b2 );
        }
        {
          NeoPixels.setPixelColor(7, r2, g2, b2 );
        }
        {
          NeoPixels.setPixelColor(6, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(5, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(4, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(3, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(2, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(1, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(0, r0, g0, b0 );
        }
        NeoPixels.show();
        delay (100);
      }
      {
        {
          NeoPixels.setPixelColor(8, r1, g1, b1 );
        }
        {
          NeoPixels.setPixelColor(7, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(6, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(5, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(4, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(3, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(2, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(1, r0, g0, b0 );
        }
        {
          NeoPixels.setPixelColor(0, r0, g0, b0 );
        }
        NeoPixels.show();
        delay (100);
      }
    case 1:
    {
      NeoPixels.setPixelColor(0, 0, 0, 0 );
      NeoPixels.setPixelColor(1, 0, 0, 0 );
      NeoPixels.setPixelColor(2, 0, 0, 0 );
      NeoPixels.setPixelColor(3, 0, 0, 0 );
      NeoPixels.setPixelColor(4, 0, 0, 0 );
      NeoPixels.setPixelColor(5, 0, 0, 0 );
      NeoPixels.setPixelColor(6, 0, 0, 0 );
      NeoPixels.setPixelColor(7, 0, 0, 0 );
      NeoPixels.setPixelColor(8, 0, 0, 0 );
    }
  }
  NeoPixels.show();
}
