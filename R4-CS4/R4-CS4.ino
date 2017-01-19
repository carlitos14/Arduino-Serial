/*******************************************************************************
**                                                                            **      
**                        TITOL: R4-CONTROL STRUCTURES (PART 4)               **
**                                                                            **  
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 11/01/2016  **
*******************************************************************************/
//**********************************INCLUDE*************************************

//*********************************VARIABLES************************************
float qualEnerg = 3.7 ;
//***********************************SETUP**************************************
void setup ()
{
  Serial.begin(9600); 
  
  if (qualEnerg >= 43.2)
  {
    Serial.print("G");
  }
  else if (qualEnerg < 43.2 & qualEnerg > 38.2)
  {
    Serial.print("F");
  }
  else if (qualEnerg <= 38.2 & qualEnerg > 17.7)
  {
    Serial.print("E");
  }
  else if (qualEnerg <= 17.7 & qualEnerg > 11.1)
  {
    Serial.print("D");
  }
  else if (qualEnerg <= 11.1 & qualEnerg > 6.5)
  {
    Serial.print("C");
  }
  else if (qualEnerg <= 6.5 & qualEnerg > 3.5)
  {
    Serial.print("B");
  }
  else
  {
    Serial.print("A");
  }
}
//************************************LOOP**************************************
void loop()   
{
}
//**********************************FUNCIONS************************************
