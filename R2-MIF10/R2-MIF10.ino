/*******************************************************************************
**                                                                            **      
**                           TITOL: MATCH IS FUN (PART 10)                    **
**                                                                            **  
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 09/01/2016  **
*******************************************************************************/
//**********************************INCLUDE*************************************

//*********************************VARIABLES************************************
int a = 3;
int b = 2;
float d;
//***********************************SETUP**************************************
void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);      // set up Serial library at 9600 bps

  Serial.println("Here is division: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);

  d =(float) a / b;
 
  Serial.print("a / b = ");
  Serial.println(d);
}
//************************************LOOP**************************************
void loop()
{ 
} 
//**********************************FUNCIONS************************************
