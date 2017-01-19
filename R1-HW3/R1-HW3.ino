/*******************************************************************************
**                                                                            **      
**                           TITOL: HELLO WORLD (PART 3)                      **
**                                                                            **  
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 21/12/2016  **
*******************************************************************************/
//**********************************INCLUDE*************************************


//*********************************VARIABLES************************************


//***********************************SETUP**************************************

void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
}

//************************************LOOP**************************************

void loop()                 // run over and over again
{
  Serial.println("Hello world!");  
  delay(1000);
}

//**********************************FUNCIONS************************************
