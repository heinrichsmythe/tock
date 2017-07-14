#define PERIPHERAL_INTERRUPT_VECTORS \
	POWER_CLOCK_Handler, \
	RADIO_Handler, \
	UART0_Handler, \
	SPI0_TWI0_Handler, \
	SPI1_TWI1_Handler, \
	NFCT_Handler, \
	GPIOTE_Handler, \
	ADC_Handler, \
	TIMER0_Handler, \
	TIMER1_Handler, \
	TIMER2_Handler, \
	RTC0_Handler, \
	TEMP_Handler, \
	RNG_Handler, \
	ECB_Handler, \
	CCM_AAR_Handler, \
	WDT_Handler, \
	RTC1_Handler, \
	QDEC_Handler, \
	LPCOMP_Handler, \
	SWI0_Handler, \
	SWI1_Handler, \
	SWI2_Handler, \
	SWI3_Handler, \
	SWI4_Handler, \
	SWI5_Handler, \
	TIMER3_Handler, \
	TIMER4_Handler, \
	PWM0_Handler, \
	PDM_Handler, \
	0, /* Reserved */ \
	0, /* Reserved */ \
  MWU_Handler, \
  PWM1_Handler, \
  PWM2_Handler, \
  SPIM2_SPIS2_SPI2_Handler, \
  RTC2_Handler, \
  I2S_Handler, \
  FPU_Handler,
#define PERIPHERAL_INTERRUPT_HANDLERS \
void POWER_CLOCK_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void RADIO_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void UART0_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void SPI0_TWI0_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void SPI1_TWI1_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void NFCT_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void GPIOTE_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void ADC_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void TIMER0_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void TIMER1_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void TIMER2_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void RTC0_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void TEMP_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void RNG_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void ECB_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void CCM_AAR_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void WDT_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void RTC1_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void QDEC_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void LPCOMP_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void SWI0_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void SWI1_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void SWI2_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void SWI3_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void SWI4_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void SWI5_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void TIMER3_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void TIMER4_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void PWM0_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void PDM_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void MWU_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void PWM1_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void PWM2_Handler(void)  __attribute__ ((weak, alias("Dummy_Handler"))); \
void SPIM2_SPIS2_SPI2_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void RTC2_Handler(void) __attribute__ ((weak, alias("Dummy_Handler"))); \
void I2S_Handler(void)  __attribute__ ((weak, alias("Dummy_Handler"))); \
void FPU_Handler(void)  __attribute__ ((weak, alias("Dummy_Handler")));
