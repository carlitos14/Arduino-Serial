/*******************************************************************************
**                                                                            **      
**                                   TITOL:R4 - P5                            **
**                                                                            **  
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 19/01/2017  **
*******************************************************************************/
//**********************************INCLUDE*************************************

//*********************************VARIABLES************************************
int sensorReading = 4;
//***********************************SETUP**************************************
void setup()
{
  Serial.begin(9600);
  Serial.print("The day is "); 
   
  switch (sensorReading) {
  case 0:    
    Serial.println("dark");
    break;
  case 1:    
    Serial.println("dim");
    break;
  case 2:    
    Serial.println("medium");
    break;
  case 3:
    Serial.println("bright");
    break;
  default:
    Serial.println("... I don't know!!!");
  } 
}

//************************************LOOP**************************************

void loop()                     
{
}

//**********************************FUNCIONS************************************
