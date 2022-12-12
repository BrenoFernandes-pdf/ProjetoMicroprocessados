/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file       	: main.c
  * @brief      	: Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "tim.h"
#include "usart.h"
#include <strings.h> //função reponsável por comparar strings.


/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
char decisao[8] = "0"; // variável que receberá a informação vinda da UART.
uint8_t i = 255;	  // variável usada nas funções oscillate();






void oscillateWhite(){ //oscilando Branco

	        if(i == 0){

		   	     i = 255;

		   		}

		   		 i-=3 ;

		   		 set_cor(i, i, i);




HAL_Delay(10);
}
void oscillatePurple(){ //oscilando Roxo

	        if(i == 0){

		   			 i = 255;


		   		 }

		   		 i-=3 ;

		   		 set_cor(i, 0, i);




HAL_Delay(10);
}
void oscillateTurquoise(){ //oscilando Turquesa

	        if(i == 0){

		   			 i = 255;


		   		 }

		   		 i-=3 ;

		   		 set_cor(0, i, i);




HAL_Delay(10);
}
/////////////////////////////////////////////////////////////////////////
void oscillateBlue(){ //oscilando azul

	        if(i == 0){

		   	     i = 255;

		   		}

		   		 i-=3 ;

		   		 set_cor(0, 0, i);




HAL_Delay(10);
}
void oscillateOrange(){ //oscilando Laranja

		HAL_Delay(20);
		set_cor(255, 70, 0);
		HAL_Delay(1000);
		set_cor(0, 0, 0);
		HAL_Delay(20);




HAL_Delay(10);
}
void oscillateYellow(){ //oscilando amarelo


	HAL_Delay(20);
	set_cor(190, 80, 0);
	HAL_Delay(1000);
	set_cor(0, 0, 0);
	HAL_Delay(20);





HAL_Delay(10);
}
void oscillateRed(){ //oscilando vermelho

	        if(i == 0){

		   	     i = 255;

		   		}

		   		 i-=3 ;

		   		 set_cor(i, 0, 0);




HAL_Delay(10);
}
void oscillateGreen(){ //oscilando verde

	        if(i == 0){

		   	     i = 255;

		   		}

		   		 i-=3 ;

		   		 set_cor(0, i, 0);




HAL_Delay(10);
}
//////////////////////////////////////////////////////////////////////////////
void blinkingColors(){ //pisca rápido de cada cor (baladinha)
	    set_cor(0, 0, 0);
	    HAL_Delay(90);
		set_cor(255, 0, 0);	// VERMELHO
		HAL_Delay(90);
		set_cor(0, 0, 0);
		HAL_Delay(90);;
		set_cor(0, 255, 0);	// VERDE
		HAL_Delay(90);
		set_cor(0, 0, 0);
		HAL_Delay(90);
		set_cor(0, 0, 255); // AZUL
		HAL_Delay(90);
		set_cor(0, 0, 0);
		HAL_Delay(90);
		set_cor(255, 70, 0); // LARANJA
		HAL_Delay(90);
		set_cor(0, 0, 0);
		HAL_Delay(90);
		set_cor(255, 0, 255); // ROXO
		HAL_Delay(90);
		set_cor(0, 0, 0);
		HAL_Delay(90);
		set_cor(0, 255, 255); // TURQUESA
		HAL_Delay(90);
		set_cor(0, 0, 0);
		HAL_Delay(90);
		set_cor(190, 80, 0); // AMARELO
		HAL_Delay(90);
		set_cor(0, 0, 0);
		HAL_Delay(90);
		set_cor(255, 255, 255); //BRANCO


}


void colorVariation (){ //passando por cada cor.

	HAL_Delay(1000);
	set_cor(255, 0, 0);	// VERMELHO
	HAL_Delay(1000);
	set_cor(0, 255, 0);	// VERDE
	HAL_Delay(1000);
	set_cor(0, 0, 255); // AZUL
	HAL_Delay(1000);
	set_cor(255, 70, 0); // LARANJA
	HAL_Delay(1000);
	set_cor(255, 0, 255); // ROXO
	HAL_Delay(1000);
	set_cor(0, 255, 255); // TURQUESA
	HAL_Delay(1000);
	set_cor(190, 80, 0); // AMARELO
	HAL_Delay(1000);
	set_cor(255, 255, 255); //BRANCO

}

void blink(){ //pisca rápido branco.

	HAL_Delay(20);
	set_cor(255, 255, 255);
	HAL_Delay(20);
	set_cor(0, 0, 0);
	HAL_Delay(20);

}
void oscillateNatal(){
	set_cor(255, 255, 255);
	HAL_Delay(60);
	set_cor(0, 0, 0);
	HAL_Delay(60);
	set_cor(255, 255, 255);
		HAL_Delay(60);
		set_cor(0, 0, 0);
		HAL_Delay(60);
		set_cor(255, 255, 255);
			HAL_Delay(60);
			set_cor(0, 0, 0);
			HAL_Delay(60);
			set_cor(255, 255, 255);
				HAL_Delay(60);
				set_cor(0, 0, 0);
				HAL_Delay(60);
				set_cor(255, 255, 255);
					HAL_Delay(60);
					set_cor(0, 0, 0);
					HAL_Delay(60);
					set_cor(255, 255, 255);
						HAL_Delay(60);
						set_cor(0, 0, 0);
						HAL_Delay(60);
						set_cor(255, 255, 255);
							HAL_Delay(60);
							set_cor(0, 0, 0);
							HAL_Delay(60);
							set_cor(255, 255, 255);
								HAL_Delay(60);
								set_cor(0, 0, 0);
								HAL_Delay(60);
								set_cor(255, 255, 255);
									HAL_Delay(60);
									set_cor(0, 0, 0);
									HAL_Delay(60);
									set_cor(255, 255, 255);
										HAL_Delay(60);
										set_cor(0, 0, 0);
										HAL_Delay(100);










}

void funchoi(char decisao[]){ //função que receberá como parâmetro a ação desejada.
  if(strcasecmp(decisao,"1") == 0){

	    HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_1);
	   	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_2); //iniciando a geração do PWM.
	   	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_4);

  }
  else if(strcasecmp(decisao,"0") == 0){
	  HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_1);
	  HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_2); //Parando geração de PWM.
	  HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_4);
  }
  // LEMBRE-SE set_cor(R, G, B);
  else if(strcasecmp(decisao,"R") == 0){ // VERMELHO
	  set_cor(255, 0, 0);

  }
  else if(strcasecmp(decisao,"G") == 0){ // VERDE
  	  set_cor(0, 255, 0);
    }
  else if(strcasecmp(decisao,"B") == 0){ // AZUL
  	  set_cor(0, 0, 255);
    }
  else if(strcasecmp(decisao,"Y") == 0){ // AMARELO
	  set_cor(190, 80, 0);
    }
  else if(strcasecmp(decisao,"L") == 0){ // LARANJA
	  set_cor(255, 70, 0);
    }
  else if(strcasecmp(decisao,"P") == 0){ // ROXO
  	  set_cor(255, 0, 255);
    }
  else if(strcasecmp(decisao,"T") == 0){ // TURQUESA
	  set_cor(0, 255, 255);
    }
  else if(strcasecmp(decisao,"W") == 0){ // BRANCO
  	  set_cor(255, 255, 255);
    }
  else if(strcasecmp(decisao,"F") == 0){ // PISCA RÁPIDO BRANCO
  	  blink();
    }
  else if(strcasecmp(decisao,"O") == 0){ // OSCILAR BRANCO
	  oscillateWhite();
    }
  else if(strcasecmp(decisao,"Z") == 0){ // OSCILAR ROXO
  	  oscillatePurple();
    }
  else if(strcasecmp(decisao,"X") == 0){ // OSCILAR TURQUESA
  	  oscillateTurquoise();
    }
  else if(strcasecmp(decisao,"A") == 0){ // ALTERNAR CORES.
	  colorVariation ();

    }
  /////////////////////////////////////////////////////////////////
  else if(strcasecmp(decisao,"2") == 0){ // OSCILAR AZUL
	  oscillateBlue();
    }
  else if(strcasecmp(decisao,"3") == 0){ // OSCILAR LARANJA
	  oscillateOrange();
      }
  else if(strcasecmp(decisao,"4") == 0){ // OSCILAR AMARELO
	  oscillateYellow();
      }
  else if(strcasecmp(decisao,"5") == 0){ // OSCILAR VERMELHO
	  oscillateRed();
      }
  else if(strcasecmp(decisao,"6") == 0){ // OSCILAR VERDE
	  oscillateGreen();
      }
  else if(strcasecmp(decisao,"7") == 0){ // BALADINHA
	  blinkingColors();
      }
  else if(strcasecmp(decisao,"8") == 0){ // ENTÃO É NATAL
	  oscillateNatal();
      }





}
void set_cor(uint8_t r, uint8_t g, uint8_t b){ //Coração do projeto. Mistura de cores e uso do PWM.
    uint8_t xr = (r*1000)/255;
    uint8_t xg = (g*1000)/255;
    uint8_t xb = (b*1000)/255;
    __HAL_TIM_SET_COMPARE(&htim3,TIM_CHANNEL_1,xr);
    __HAL_TIM_SET_COMPARE(&htim3,TIM_CHANNEL_2,xg);
    __HAL_TIM_SET_COMPARE(&htim3,TIM_CHANNEL_4,xb);



}


/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_TIM3_Init();
  MX_USART1_UART_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
 while (1)
  {
	/* USER CODE END WHILE */

	 funchoi(decisao);
	 HAL_UART_Receive(&huart1, (uint8_t*)decisao, 1, 100);



	/* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  RCC_PeriphCLKInitTypeDef PeriphClkInit = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
	Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                          	|RCC_CLOCKTYPE_PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
	Error_Handler();
  }
  PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_USART1;
  PeriphClkInit.Usart1ClockSelection = RCC_USART1CLKSOURCE_PCLK1;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) != HAL_OK)
  {
	Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *     	where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
 	ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */


