/*******************************************************************************
**                                                                            **      
**                        TITOL: R4-CONTROL STRUCTURES (PART 6)               **
**                                                                            **  
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 19/01/2016  **
*******************************************************************************/
//**********************************INCLUDE*************************************

//*********************************VARIABLES************************************
int comptar = 11;
//***********************************SETUP**************************************
void setup()                    // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
 
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++)
  {
    Serial.print(i);
    Serial.print("-");
  } 
}
//************************************LOOP**************************************
void loop()   
{
}
//**********************************FUNCIONS************************************
