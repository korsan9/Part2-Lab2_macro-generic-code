/**
  ******************************************************************************
  * @file    main.c
  * @author  Meriam Korsan
  * @brief   Part2 Lab2_macro & generic code
  * @version V1.0.0
  * @date    25-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/
static int mul (int var1, int var2);
static int Compare_Max (int var1, int var2);

/* Macros --------------------------------------------------------------------*/
#define INTEL 1
#define A 1
#define B 3
#define __SOM(X,Y) (INTEL)?(X+Y):0
#define __COMPARE_MIN(X,Y) (INTEL)?((X<Y) ? X :Y) :0
#define OTHERS

/* Private functions ---------------------------------------------------------*/


/**
  * @brief  Main program
  * @param  None
  * @retval None
  */

int main(void)
{
  int som=__SOM(A,B);                 /*sum */
  int Result_Min=__COMPARE_MIN(A,B);  /* min value between two numbers A and B*/
  int MUX= mul(A,B);                  /*multiplication*/
  int Result_Max= Compare_Max(A,B);   /* max value between two numbers A and B*/

 

   while (1)
  {}
}


static int mul (int var1, int var2)
{
  return (var1*var2);                 /*multiplication*/
}


static int Compare_Max (int var1, int var2)
{
  return ((var1>var2)? var1:var2);    /* max value between two numbers A and B*/
}




/**************************************END OF FILE**************************************/
