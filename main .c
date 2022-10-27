/**
  ******************************************************************************
  * @file    main.c
  * @author  Meriam Korsan
  * @brief   Part2 Lab2_macro & generic code
  * @version V1.0.0
  * @date    27-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/


/* Macros --------------------------------------------------------------------*/
#define INTEL 1
#define A 1
#define B 3
#define __Mul(X,Y) (X*Y)
#define min(X, Y)   ((X) < (Y) ? (X) : (Y))      

#if (INTEL)                                  
  #define max(X, Y)  ((X) > (Y) ? (X) : (Y))
  #define __SOM(X,Y) (X+Y)
#endif
#define OTHERS

/* Private functions ---------------------------------------------------------*/


/**
  * @brief  Main program
  * @param  None
  * @retval None
  */

int main(void)
{
#ifdef OTHERS

  int MUX=__Mul(A,B);                  /*multiplication*/
  int Result_Max= max(A,B);   /* max value between two numbers A and B*/

#endif
  int som=__SOM(A,B);                 /*sum */
  int Result_Min=min(A,B);  /* min value between two numbers A and B*/



   while (1)
  {}
}






/**************************************END OF FILE**************************************/
