/*
 * TFT_Display.ino
 *
 * Created: 6/12/2015 8:56:19 AM
 * Author: Tobias Nuss
 */ 

#include "SPI.h"
#include "Adafruit_GFX.h"
#include "Adafruit_ILI9340.h"

#if defined(__SAM3X8E__)
#undef __FlashStringHelper::F(string_literal)
#define F(string_literal) string_literal
#endif

#define _sclk 52
#define _miso 50
#define _mosi 51
#define _cs 53
#define _dc 9
#define _rst 8

Adafruit_ILI9340 tft = Adafruit_ILI9340(_cs, _dc, _rst);

// Pegelwandler benoetigt: CD4050



void setup()
{
	tft.begin();

	tft.setRotation(1);
	testText();
}

void loop()
{
	
}


unsigned long testText() {
	tft.fillScreen(ILI9340_BLACK);
	tft.setCursor(20,20);
	tft.setTextColor(ILI9340_RED);  
	tft.setTextSize(3);
	tft.println("Thank you!");
	
	tft.setCursor(80,200);
	tft.setTextColor(ILI9340_RED);
	tft.setTextSize(3);
	tft.println("Thank you!");
	
/*	tft.setCursor(20, 20);
	tft.setTextColor(ILI9340_RED);  
	tft.setTextSize(4);
	tft.println("Thank you!");
	tft.setCursor(20, 70);
	tft.setTextColor(ILI9340_YELLOW); 
	tft.setTextSize(2);
	tft.print("Adafruit"); 
	tft.setTextColor(ILI9340_WHITE);
	tft.print(" & ");
	tft.setTextColor(ILI9340_GREEN);
	tft.println("Sparkfun");
	tft.setTextColor(ILI9340_WHITE);
	tft.setTextSize(2);
	tft.println();
	tft.println("It's crazy! The display ");
	tft.println("works! ");
	tft.println();
	tft.print("Thank");
	tft.setTextColor(ILI9340_YELLOW);
	tft.println("Adafruit");
	tft.setTextColor(ILI9340_WHITE);
	tft.println("for the perfect libraries");
	tft.print("& thank you ");
	tft.setTextColor(ILI9340_GREEN);
	tft.print("Sparkfun");
	tft.setTextColor(ILI9340_WHITE);
	tft.println("for");
	tft.println("the really simple to use");
	tft.println("Level Converter! ");*/
}