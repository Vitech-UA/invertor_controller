/*
 * invertor.h
 *
 *  Created on: Nov 17, 2024
 *      Author: Vitech-UA
 */

#ifndef INC_INVERTOR_H_
#define INC_INVERTOR_H_
#include "stdbool.h"
#include "MCP23017.h"

#define CEN_FAN_PORT MCP23017_PORTA
#define CEN_FAN_PIN MCP23017_GPIO2

#define CCONNECT_CHARGER_PORT MCP23017_PORTA
#define CCONNECT_CHARGER_PIN MCP23017_GPIO3

#define CEN12V_PORT MCP23017_PORTA
#define CEN12V_PIN MCP23017_GPIO4

#define CEN_BRIDGE_POWER_PORT MCP23017_PORTA
#define CEN_BRIDGE_POWER_PIN MCP23017_GPIO5

#define DT1_PORT MCP23017_PORTA
#define DT1_PIN MCP23017_GPIO6

#define CEN_UART_EG_PORT MCP23017_PORTA
#define CEN_UART_EG_PIN MCP23017_GPIO7

#define DT0_PORT MCP23017_PORTB
#define DT0_PIN MCP23017_GPIO0

#define CPOWER_STROB_PORT MCP23017_PORTB
#define CPOWER_STROB_PIN MCP23017_GPIO1

#define CPOWER_EN_PORT MCP23017_PORTB
#define CPOWER_EN_PIN MCP23017_GPIO2

#define FQSEL_PORT MCP23017_PORTB
#define FQSEL_PIN MCP23017_GPIO3

#define SST_PORT MCP23017_PORTB
#define SST_PIN MCP23017_GPIO4

#define CEN_PWM_PORT MCP23017_PORTB
#define CEN_PWM_PIN MCP23017_GPIO5

#define CEN_220V_OUT_PORT MCP23017_PORTB
#define CEN_220V_OUT_PIN MCP23017_GPIO6

#define CEN_BYPASS_PORT MCP23017_PORTB
#define CEN_BYPASS_PIN MCP23017_GPIO7




void set_12V(bool state);
void set_bridge_power(bool state);
void connect_charger(bool state);
void set_buzzer(bool state);
void init_gpio_expander(void);

#endif /* INC_INVERTOR_H_ */