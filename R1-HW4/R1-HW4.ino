/*******************************************************************************
**                                                                            **      
**                           TITOL: HELLO WORLD (PART 4)                      **
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
  Serial.println("Escull el numero de l'operació que vols realitzar."); // prints Hello world! with brake line
  Serial.println("  1. Comprovar numero de tarjeta de crèdit"); 
  Serial.println("  2. Comprovar numero de compte bancari");
  Serial.println("  3. Buscar un digit perdut de tarjeta de crèdit");
}

//************************************LOOP**************************************

void loop()   // run over and over again
{
       // do nothing
}

//**********************************FUNCIONS************************************
