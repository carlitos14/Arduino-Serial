/*******************************************************************************
**                                                                            **      
**                           TITOL: HELLO WORLD (PART 2)                      **
**                                                                            **  
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 21/12/2016  **
*******************************************************************************/
//**********************************INCLUDE*************************************

//*********************************VARIABLES************************************

//***********************************SETUP**************************************
void setup()              
{
  Serial.begin(9600);    
}
//************************************LOOP**************************************
void loop()                     
{
  Serial.print("Hello world!");  // prints Hello world!
  delay(1000);
}
//**********************************FUNCIONS************************************