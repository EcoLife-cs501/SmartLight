﻿// FYI: Для littleBits доступны 3 входных и 3 выходных пина
// Три правых - ввод
const int top_input_pin = 0; // только digital обмены!
const int middle_input_pin = A0;
const int bottom_input_pin = A1;

// Три левых - вывод
const int top_output_pin = 1; // только digital обмены!
const int middle_output_pin = 5; // используй для вывода PWM значений
const int bottom_output_pin = 9;

void setup()
{

  /* add setup code here */
	

}

void loop()
{
	Serial.begin(9600);
  /* add main program code here */

}
