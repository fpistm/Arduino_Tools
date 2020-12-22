/* Dual pad pin name */
PC_2_C      = PC_2   | PDUAL,
PC_3_C      = PC_3   | PDUAL,

/* Alternate pin name */
PA_0_ALT1   = PA_0   | ALT1,
PA_1_ALT1   = PA_1   | ALT1,
PA_1_ALT2   = PA_1   | ALT2,
PA_2_ALT1   = PA_2   | ALT1,
PA_2_ALT2   = PA_2   | ALT2,
PA_3_ALT1   = PA_3   | ALT1,
PA_3_ALT2   = PA_3   | ALT2,
PA_4_ALT1   = PA_4   | ALT1,
PA_4_ALT2   = PA_4   | ALT2,
PA_5_ALT1   = PA_5   | ALT1,
PA_5_ALT2   = PA_5   | ALT2,
PA_5_ALT3   = PA_5   | ALT3,
PA_6_ALT1   = PA_6   | ALT1,
PA_7_ALT1   = PA_7   | ALT1,
PA_7_ALT2   = PA_7   | ALT2,
PA_7_ALT3   = PA_7   | ALT3,
PA_8_ALT1   = PA_8   | ALT1,
PA_9_ALT1   = PA_9   | ALT1,
PA_10_ALT1  = PA_10  | ALT1,
PA_11_ALT1  = PA_11  | ALT1,
PA_12_ALT1  = PA_12  | ALT1,
PA_15_ALT1  = PA_15  | ALT1,
PA_15_ALT2  = PA_15  | ALT2,
PB_0_ALT1   = PB_0   | ALT1,
PB_0_ALT2   = PB_0   | ALT2,
PB_0_ALT3   = PB_0   | ALT3,
PB_1_ALT1   = PB_1   | ALT1,
PB_1_ALT2   = PB_1   | ALT2,
PB_3_ALT1   = PB_3   | ALT1,
PB_3_ALT2   = PB_3   | ALT2,
PB_4_ALT1   = PB_4   | ALT1,
PB_4_ALT2   = PB_4   | ALT2,
PB_5_ALT1   = PB_5   | ALT1,
PB_5_ALT2   = PB_5   | ALT2,
PB_6_ALT1   = PB_6   | ALT1,
PB_6_ALT2   = PB_6   | ALT2,
PB_7_ALT1   = PB_7   | ALT1,
PB_8_ALT1   = PB_8   | ALT1,
PB_8_ALT2   = PB_8   | ALT2,
PB_9_ALT1   = PB_9   | ALT1,
PB_9_ALT2   = PB_9   | ALT2,
PB_14_ALT1  = PB_14  | ALT1,
PB_14_ALT2  = PB_14  | ALT2,
PB_15_ALT1  = PB_15  | ALT1,
PB_15_ALT2  = PB_15  | ALT2,
PC_0_ALT1   = PC_0   | ALT1,
PC_0_ALT2   = PC_0   | ALT2,
PC_1_ALT1   = PC_1   | ALT1,
PC_1_ALT2   = PC_1   | ALT2,
PC_1_ALT3   = PC_1   | ALT3,
PC_1_ALT4   = PC_1   | ALT4,
PC_1_ALT5   = PC_1   | ALT5,
PC_2_C_ALT1 = PC_2_C | ALT1,
PC_4_ALT1   = PC_4   | ALT1,
PC_5_ALT1   = PC_5   | ALT1,
PC_5_ALT2   = PC_5   | ALT2,
PC_5_ALT3   = PC_5   | ALT3,
PC_6_ALT1   = PC_6   | ALT1,
PC_6_ALT2   = PC_6   | ALT2,
PC_7_ALT1   = PC_7   | ALT1,
PC_7_ALT2   = PC_7   | ALT2,
PC_8_ALT1   = PC_8   | ALT1,
PC_9_ALT1   = PC_9   | ALT1,
PC_10_ALT1  = PC_10  | ALT1,
PC_11_ALT1  = PC_11  | ALT1,

/* SYS_WKUP */
#ifdef PWR_WAKEUP_PIN1
  SYS_WKUP1 = PA_0,
#endif
#ifdef PWR_WAKEUP_PIN2
  SYS_WKUP2 = PA_2,
#endif
#ifdef PWR_WAKEUP_PIN3
  SYS_WKUP3 = NC,
#endif
#ifdef PWR_WAKEUP_PIN4
  SYS_WKUP4 = PC_13,
#endif
#ifdef PWR_WAKEUP_PIN5
  SYS_WKUP5 = NC,
#endif
#ifdef PWR_WAKEUP_PIN6
  SYS_WKUP6 = PC_1,
#endif
#ifdef PWR_WAKEUP_PIN7
  SYS_WKUP7 = NC,
#endif
#ifdef PWR_WAKEUP_PIN8
  SYS_WKUP8 = NC,
#endif

/* USB */
#ifdef USBCON
  USB_OTG_HS_DM       = PA_11,
  USB_OTG_HS_DP       = PA_12,
  USB_OTG_HS_ID       = PA_10,
  USB_OTG_HS_SOF      = PA_8,
  USB_OTG_HS_ULPI_CK  = PA_5,
  USB_OTG_HS_ULPI_D0  = PA_3,
  USB_OTG_HS_ULPI_D1  = PB_0,
  USB_OTG_HS_ULPI_D2  = PB_1,
  USB_OTG_HS_ULPI_D3  = PB_10,
  USB_OTG_HS_ULPI_D4  = PB_11,
  USB_OTG_HS_ULPI_D5  = PB_12,
  USB_OTG_HS_ULPI_D6  = PB_13,
  USB_OTG_HS_ULPI_D7  = PB_5,
  USB_OTG_HS_ULPI_DIR = PC_2_C,
  USB_OTG_HS_ULPI_NXT = PC_3_C,
  USB_OTG_HS_ULPI_STP = PC_0,
  USB_OTG_HS_VBUS     = PA_9,
#endif
