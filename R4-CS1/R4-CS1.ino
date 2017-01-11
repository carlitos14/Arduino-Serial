/*******************************************************************************
**                                                                            **      
**                        TITOL: R4-CONTROL STRUCTURES (PART 1                **
**                                                                            **  
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 09/01/2016  **
*******************************************************************************/
//**********************************INCLUDE*************************************

//*********************************VARIABLES************************************
int tempAigua = 100;
//***********************************SETUP**************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua > 99)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");

  else ( tempAigua < 100)
  }
  Serial.print("Aigua encara no vull"); 
}
//************************************LOOP**************************************
void loop()   // we need this to be here even though its empty
{
}
//**********************************FUNCIONS************************************
