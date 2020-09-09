/*
 * Use sed for automatic code generation
 *
 * cat reg | sed 's/,//g' | sed 's/    //' | sed -re 's/(^\w*)/[\1]/' | sed 's/$/ = "",/'
 *
 * make enum
 * sed 's/[a-z]/\U&/g' | sed 's/ /_/g'
 *
 *
 * sed 's/$/ { union { u B; struct {/g'
 *
 * sed 's/^[ \t]* //g '
 *
 * sed 's/^/struct /g' | sed 'i }; }; };'
 *
 *
 */

#ifndef __ICM_42605_H__
#define __ICM_42605_H__

#include <stdint.h>

#define ARRAY_SIZE(x) sizeof((x))/sizeof((x[0]))

//Advanced Pedometer and Event Detection Extended APEX

#define BANK0 0
#define BANK1 1
#define BANK2 2
#define BANK4 4

enum ICM_42605_REG_ADDR_BANK0
{
    DEVICE_CONFIG  = 17,
    DRIVE_CONFIG  = 19,
    INT_CONFIG  = 20,
    FIFO_CONFIG  = 22,
    TEMP_DATA1  = 29,
    TEMP_DATA0  = 30,
    ACCEL_DATA_X1  = 31,
    ACCEL_DATA_X0  = 32,
    ACCEL_DATA_Y1  = 33,
    ACCEL_DATA_Y0,
    ACCEL_DATA_Z1,
    ACCEL_DATA_Z0,
    GYRO_DATA_X1,
    GYRO_DATA_X0,
    GYRO_DATA_Y1,
    GYRO_DATA_Y0,
    GYRO_DATA_Z1,
    GYRO_DATA_Z0,
	TMST_FSYNCH = 0x2B,
	TMST_FSYNCL = 0x2C,
    INT_STATUS  = 45,
    FIFO_COUNTH,
    FIFO_COUNTL,
    FIFO_DATA,
    APEX_DATA0 = 0x31,
    APEX_DATA1,
    APEX_DATA2,
    APEX_DATA3,
    APEX_DATA4,
    APEX_DATA5,
    INT_STATUS2,
    INT_STATUS3,
    SIGNAL_PATH_RESET  = 0x4B,
    INTF_CONFIG0,
    INTF_CONFIG1 = 0x4D,
    PWR_MGMT0 = 0x4E,
    GYRO_CONFIG0,
    ACCEL_CONFIG0 = 0x50,
    GYRO_CONFIG1,
    GYRO_ACCEL_CONFIG0,
    ACCEL_CONFIG1,
    TMST_CONFIG,
    APEX_CONFIG0  = 0x56,
    SMD_CONFIG,
    FIFO_CONFIG1  = 95,
    FIFO_CONFIG2,
    FIFO_CONFIG3,
    INT_CONFIG0  = 99,
    INT_CONFIG1,
    INT_SOURCE0,
    INT_SOURCE1,
    INT_SOURCE3  = 104,
    INT_SOURCE4,
    FIFO_LOST_PKT0  = 108,
    FIFO_LOST_PKT1,
    SELF_TEST_CONFIG  = 112,
    WHO_AM_I  = 117,
    REG_BANK_SEL = 0x76
};

enum ICM_42605_REG_ADDR_BANK1
{
    SENSOR_CONFIG0 = 0x3,
    GYRO_CONFIG_STATIC2 = 0x0B,
    GYRO_CONFIG_STATIC3 = 0x0C,
    GYRO_CONFIG_STATIC4,
    GYRO_CONFIG_STATIC5,
    GYRO_CONFIG_STATIC6,
    GYRO_CONFIG_STATIC7,
    GYRO_CONFIG_STATIC8,
    GYRO_CONFIG_STATIC9,
    GYRO_CONFIG_STATIC10,
    XG_ST_DATA = 0x5F,
    YG_ST_DATA = 0x60,
    ZG_ST_DATA,
    TMSTVAL0,
    TMSTVAL1,
    TMSTVAL2,
    INTF_CONFIG4 = 0x7A,
    INTF_CONFIG5 = 0x7B
};


enum ICM_42605_REG_ADDR_BANK2
{
    ACCEL_CONFIG_STATIC2 = 0x03,
    ACCEL_CONFIG_STATIC3,
    ACCEL_CONFIG_STATIC4,
    XA_ST_DATA = 0x3B,
    YA_ST_DATA,
    ZA_ST_DATA
};


enum ICM_42605_REG_ADDR_BANK4
{
    APEX_CONFIG1 = 0x40,
    APEX_CONFIG2,
    APEX_CONFIG3,
    APEX_CONFIG4,
    APEX_CONFIG5,
    APEX_CONFIG6,
    APEX_CONFIG7,
    APEX_CONFIG8,
    APEX_CONFIG9,
    ACCEL_WOM_X_THR = 0x4A,
    ACCEL_WOM_Y_THR,
    ACCEL_WOM_Z_THR,
    INT_SOURCE6,
    INT_SOURCE7,
    OFFSET_USER0 = 0x77,
    OFFSET_USER1,
    OFFSET_USER2,
    OFFSET_USER3,
    OFFSET_USER4,
    OFFSET_USER5,
    OFFSET_USER6,
    OFFSET_USER7,
    OFFSET_USER8 = 0x7F
};

static const uint8_t dump_list_bank0[] =
{
    DEVICE_CONFIG,
    DRIVE_CONFIG,
    INT_CONFIG,
    FIFO_CONFIG,
    TEMP_DATA1,
    TEMP_DATA0,
    ACCEL_DATA_X1,
    ACCEL_DATA_X0,
    ACCEL_DATA_Y1,
    ACCEL_DATA_Y0,
    ACCEL_DATA_Z1,
    ACCEL_DATA_Z0,
    GYRO_DATA_X1,
    GYRO_DATA_X0,
    GYRO_DATA_Y1,
    GYRO_DATA_Y0,
    GYRO_DATA_Z1,
    GYRO_DATA_Z0,
    //INT_STATUS,
    FIFO_COUNTH,
    FIFO_COUNTL,
    FIFO_DATA,
    APEX_DATA0,
    APEX_DATA1,
    APEX_DATA2,
    APEX_DATA3,
    APEX_DATA4,
    APEX_DATA5,
    //INT_STATUS2,
    //INT_STATUS3,
    SIGNAL_PATH_RESET,
    INTF_CONFIG0,
    INTF_CONFIG1,
    PWR_MGMT0,
    GYRO_CONFIG0,
    ACCEL_CONFIG0,
    GYRO_CONFIG1,
    GYRO_ACCEL_CONFIG0,
    ACCEL_CONFIG1,
    TMST_CONFIG,
    APEX_CONFIG0,
    SMD_CONFIG,
    FIFO_CONFIG1,
    FIFO_CONFIG2,
    FIFO_CONFIG3,
    INT_CONFIG0,
    INT_CONFIG1,
    INT_SOURCE0,
    INT_SOURCE1,
    INT_SOURCE3,
    INT_SOURCE4,
    FIFO_LOST_PKT0,
    FIFO_LOST_PKT1,
    SELF_TEST_CONFIG,
    WHO_AM_I,
    REG_BANK_SEL
};

static const uint8_t dump_list_bank1[] =
{
    SENSOR_CONFIG0,
    GYRO_CONFIG_STATIC2,
    GYRO_CONFIG_STATIC3,
    GYRO_CONFIG_STATIC4,
    GYRO_CONFIG_STATIC5,
    GYRO_CONFIG_STATIC6,
    GYRO_CONFIG_STATIC7,
    GYRO_CONFIG_STATIC8,
    GYRO_CONFIG_STATIC9,
    GYRO_CONFIG_STATIC10,
    XG_ST_DATA,
    YG_ST_DATA,
    ZG_ST_DATA,
    TMSTVAL0,
    TMSTVAL1,
    TMSTVAL2,
    INTF_CONFIG4,
    INTF_CONFIG5
};

static const uint8_t dump_list_bank2[] =
{
    ACCEL_CONFIG_STATIC2,
    ACCEL_CONFIG_STATIC3,
    ACCEL_CONFIG_STATIC4,
    XA_ST_DATA,
    YA_ST_DATA,
    ZA_ST_DATA
};

static const uint8_t dump_list_bank4[] =
{
    APEX_CONFIG1,
    APEX_CONFIG2,
    APEX_CONFIG3,
    APEX_CONFIG4,
    APEX_CONFIG5,
    APEX_CONFIG6,
    APEX_CONFIG7,
    APEX_CONFIG8,
    APEX_CONFIG9,
    ACCEL_WOM_X_THR,
    ACCEL_WOM_Y_THR,
    ACCEL_WOM_Z_THR,
    INT_SOURCE6,
    INT_SOURCE7,
    OFFSET_USER0,
    OFFSET_USER1,
    OFFSET_USER2,
    OFFSET_USER3,
    OFFSET_USER4,
    OFFSET_USER5,
    OFFSET_USER6,
    OFFSET_USER7,
    OFFSET_USER8
};

static const uint8_t accel_gyro_reg[] =
{
    ACCEL_DATA_X1,
    ACCEL_DATA_X0,
    ACCEL_DATA_Y1,
    ACCEL_DATA_Y0,
    ACCEL_DATA_Z1,
    ACCEL_DATA_Z0,
    GYRO_DATA_X1,
    GYRO_DATA_X0,
    GYRO_DATA_Y1,
    GYRO_DATA_Y0,
    GYRO_DATA_Z1,
    GYRO_DATA_Z0
};
static uint8_t accel_gyro_data[ARRAY_SIZE(accel_gyro_reg)];

enum GYRO_UI_FILT_ORD
{
	order_1 = 0x0,
	order_2 = 0x1,
	order_3 = 0x2
};

enum IRQ_EVENTS
{
	NO_IRQ = 0,
	PLL_RDY_INT,
	RESET_DONE_INT,
	DATA_RDY_INT,
	FIFO_THS_INT,
	FIFO_FULL_INT,
	AGC_RDY_INT,
	SMD_INT,
	WOM_Z_INT,
	WOM_Y_INT,
	WOM_X_INT,
	STEP_DET_INT,
	STEP_CNT_OVF_INT,
	TILT_DET_INT,
	WAKE_INT,
	SLEEP_INT,
	TAP_DET_INT
};




/*
 * Least significant bit first
 */
typedef uint8_t u;
struct icm_42605_reg_t
{
    struct bank0_t
    {
        struct DEVICE_CONFIG { union { u B; struct {
                    u SOFT_RESET_CONFIG : 1;
                    u SPI_MODE : 4;
                    u RSRV : 3;
        }; }; };

        struct DRIVE_CONFIG { union { u B; struct {
                    u SPI_SLEW_RATE : 3;
                    u I2C_SLEW_RATE : 3;
                    u RSRV : 2;
        }; }; };

        struct INT_CONFIG { union { u B; struct {
                    u INT1_POLARITY : 1;
                    u INT1_DRIVE_CIRCUIT : 1;
                    u INT1_MODE : 1;
                    u INT2_POLARITY : 1;
                    u INT2_DRIVE_CIRCUIT : 1;
                    u INT2_MODE : 1;
                    u RSRV : 2;
        }; }; };

        struct FIFO_CONFIG { union { u B; struct {
                    u RSRV : 6;
                    u FIFO_MODE : 2;
        }; }; };

        struct TEMP_DATA1 { union { u B; struct {
                    u TEMP_DATA_MSB : 8;
        }; }; };


        struct TEMP_DATA0 { union { u B; struct {
                    u TEMP_DATA_LSB : 8;
        }; }; };

        struct ACCEL_DATA_X1 { union { u B; struct {
                    u ACCEL_DATA_X_MBS : 8;
        }; }; };

        struct ACCEL_DATA_X0 { union { u B; struct {
                    u ACCEL_DATA_X_LSB : 8;
        }; }; };

        struct ACCEL_DATA_Y1 { union { u B; struct {
        	u ACCEL_DATA_Y_MSB;
        }; }; };
        struct ACCEL_DATA_Y0 { union { u B; struct {
        	u ACCEL_DATA_Y_LSB;
        }; }; };
        struct ACCEL_DATA_Z1 { union { u B; struct {
        	u ACCEL_DATA_Z_MSB;
        }; }; };
        struct ACCEL_DATA_Z0 { union { u B; struct {
        	u ACCEL_DATA_Z_LSB;
        }; }; };
        struct GYRO_DATA_X1 { union { u B; struct {
        	u GYRO_DATA_X_MSB;
        }; }; };
        struct GYRO_DATA_X0 { union { u B; struct {
        	u GYRO_DATA_X_LSB;
        }; }; };
        struct GYRO_DATA_Y1 { union { u B; struct {
        	u GYRO_DATA_Y_MSB;
        }; }; };
        struct GYRO_DATA_Y0 { union { u B; struct {
        	u GYRO_DATA_Y_LSB;
        }; }; };
        struct GYRO_DATA_Z1 { union { u B; struct {
        	u GYRO_DATA_Z_MSB;
        }; }; };
        struct GYRO_DATA_Z0 { union { u B; struct {
        	u GYRO_DATA_Z_MSB;
        }; }; };
        struct INT_STATUS { union { u B; struct {
        	u AGC_RDY_INT : 1;
        	u FIFO_FULL_INT : 1;
        	u FIFO_THS_INY : 1;
        	u DATA_RDY_INT : 1;
        	u RESET_DONE_INT: 1;
        	u PLL_RDY_INT : 1;
        	u UI_FSYNC_INT : 1;
        	u RSRV : 1;
        }; }; };
        struct FIFO_COUNTH { union { u B; struct {
        	u B;
        }; }; };
        struct FIFO_COUNTL { union { u B; struct {
        }; }; };
        struct FIFO_DATA { union { u B; struct {
        }; }; };
        struct APEX_DATA0 { union { u B; struct {
        	u STEP_CNT_MSB;
        }; }; };
        struct APEX_DATA1 { union { u B; struct {
        	u STEP_CNT_LSB;
        }; }; };
        struct APEX_DATA2 { union { u B; struct {
        	u STEP_CADENCE;
        }; }; };
        struct APEX_DATA3 { union { u B; struct {
        	u ACTIVITY_CLASS : 2;
        	u DMP_IDLE : 1;
        }; }; };
        struct APEX_DATA4 { union { u B; struct {
        	u TAP_DIR : 1;
        	u TAP_AXIS : 2;
        	u TAP_NUM : 2;
        }; }; };
        struct APEX_DATA5 { union { u B; struct {
        	u DOUBLE_TAP_TIMING : 5;
        }; }; };
        struct INT_STATUS2 { union { u B; struct {
        	u WOM_X_INT : 1;
        	u WOM_Y_INT : 1;
        	u WOM_Z_INT : 1;
        	u SMD_INT : 1;
        }; }; };
        struct INT_STATUS3 { union { u B; struct {
        	u TAP_DET_INT : 1;
        	u SLEEP_INT : 1;
        	u WAKE_INT : 1;
        	u TILT_DET_INT : 1;
        	u STEP_CNT_OVF_INT : 1;
        	u STEP_DET_INT : 1;
        }; }; };
        struct SIGNAL_PATH_RESET { union { u B; struct {
        	u RSRV : 1;
        	u FIFO_FLUSH : 1;
        	u TMST_STROBE : 1;
        	u ABORT_AND_RESET : 1;
        	u RSRV : 1;
        	u DMP_MEM_RESET_EN : 1;
        	u DMP_INIT_EN : 1;
        }; }; };
        struct INTF_CONFIG0 { union { u B; struct {
        	u UI_SIFS_CFG : 2;
        	u RSRV : 2;
        	u SENSOR_DATA_ENDIAN : 1;
        	u FIFO_COUNT_ENDIAN : 1;
        	u FIFO_COUNT_REC : 1;
        	u FIFO_HOLD_LAST_DATA_EN : 1;
        }; }; };
        struct INTF_CONFIG1 { union { u B; struct {
        	u CLKSEL : 2;
        	u ACCEL_LP_CLK_SEL : 1;
        }; }; };
        struct PWR_MGMT0 { union { u B; struct {
        	u ACCEL_MODE : 2;
        	u GYRO_MODE : 2;
        	u IDLE : 1;
        	u TEMP_DIS : 1;
        }; }; };
        struct GYRO_CONFIG0 { union { u B; struct {
        	u GYRO_ODR : 4;
        	u RSRV : 1;
        	u GYRO_FS_SEL : 3;
        }; }; };
        struct ACCEL_CONFIG0 { union { u B; struct {
        	u ACCEL_ODR : 4;
        	u RSRV : 1;
        	u ACCEL_FS_SEL : 3;
        }; }; };
        struct GYRO_CONFIG1 { union { u B; struct {
        	u GYRO_DEC2_M2_ORD : 2;
        	u GYRO_UI_FILT_ORD : 2;
        	u RSRV : 1;
        	u TEMP_FILT_BW : 3;
        }; }; };
        struct GYRO_ACCEL_CONFIG0 { union { u B; struct {
        	u GYRO_UI_FILT_BW : 4;
        	u ACCEL_UI_FILT_BW : 4;
        }; }; };
        struct ACCEL_CONFIG1 { union { u B; struct {
        	u RSRV : 1;
        	u ACCEL_DEC2_M2_ORD : 2;
        	u ACCEL_UI_FILT_ORD : 2;
        }; }; };
        struct TMST_CONFIG { union { u B; struct {
        	u TMST_EN : 1;
        	u TMST_FSYNC_EN : 1;
        	u TMST_DELTA_EN : 1;
        	u TMST_RES : 1;
        	u TMST_TO_REGS_EN : 1;
        }; }; };
        struct APEX_CONFIG0 { union { u B; struct {
        	u DMP_ODR : 2;
        	u RSRV : 1;
        	u R2W_EN : 1;
        	u TILT_ENABLE : 1;
        	u PED_ENABLE : 1;
        	u TAP_ENABLE : 1;
        	u DMP_POWER_SAVE : 1;
        }; }; };
        struct SMD_CONFIG { union { u B; struct {
        	u SMD_MODE : 2;
        	u WOM_MODE : 1;
        	u WOM_INT_MODE : 1;
        }; }; };
        struct FIFO_CONFIG1 { union { u B; struct {
        	u FIFO_ACCEL_EN : 1;
        	u FIFO_GYRO_EN : 1;
        	u FIFO_TEMP_EN : 1;
        	u FIFO_TMST_FSYNC_EN : 1;
        	u RSRV : 1;
        	u FIFO_WM_GT_TH : 1;
        	u FIFO_RESUME_PARTIAL_RD : 1;
        }; }; };
        struct FIFO_CONFIG2 { union { u B; struct {
        	u FIFO_WM_LSB : 8;
        }; }; };
        struct FIFO_CONFIG3 { union { u B; struct {
        	u FIFO_WM_MSB : 4;
        }; }; };
        struct FSYNC_CONFIG { union { u B; struct {
        	u FSYNC_POLARITY : 1;
        	u FSYNC_UI_FLAG_CLEAR_SEL : 1;
        	u RSRV : 2;
        	u FSYNC_UI_SEL : 3;
        }; }; };
        struct INT_CONFIG0 { union { u B; struct {
        	u FIFO_FULL_INT_CLEAR : 2;
        	u FIFO_THS_INT_CLEAR : 2;
        	u UI_DRDY_INT_CLEAR : 2;
        }; }; };
        struct INT_CONFIG1 { union { u B; struct {
        	u RSRV : 4;
        	u INT_ASYNC_RESET : 1;
        	u INT_TDEASSERT_DISABLE : 1;
        	u INT_TPULSE_DURATION : 1;
        }; }; };
        struct INT_SOURCE0 { union { u B; struct {
        	u UI_AGC_RDY_INT1_EN : 1;
        	u FIFO_FULL_INT1_EN : 1;
        	u FIFO_THS_INT1_EN : 1;
        	u UI_DRDY_INT1_EN : 1;
        	u RESET_DONE_INT1_EN : 1;
        	u PLL_RDY_INT1_EN : 1;
        	u UI_FSYNC_INT1_EN : 1;
        }; }; };
        struct INT_SOURCE1 { union { u B; struct {
        	u WOM_X_INT1_EN : 1;
        	u WOM_Y_INT1_EN : 1;
        	u WOM_Z_INT1_EN : 1;
        	u SMD_INT1_EN : 1;
        	u RSRV : 2;
        	u I3C_PROTOCOL_ERROR_INT1_EN : 1;
        }; }; };
        struct INT_SOURCE3 { union { u B; struct {
        	u UI_AGC_RDY_INT2_EN : 1;
        	u FIFO_FULL_INT2_EN : 1;
        	u FIFO_THS_INT2_EN : 1;
        	u UI_DRDY_INT2_EN : 1;
        	u RESET_DONE_INT2_EN : 1;
        	u PLL_RDY_INT2_EN : 1;
        	u UI_FSYNC_INT2_EN : 1;
        }; }; };
        struct INT_SOURCE4 { union { u B; struct {
        	u WOM_X_INT2_EN : 1;
        	u WOM_Y_INT2_EN : 1;
        	u WOM_Z_INT2_EN : 1;
        	u SMD_INT2_EN : 1;
        	u RSRV : 2;
        	u I3C_PROTOCOL_ERROR_INT2_EN : 1;
        }; }; };
        struct FIFO_LOST_PKT0 { union { u B; struct {
        	u FIFO_LOST_PKT_CNT_MSB : 8;
        }; }; };
        struct FIFO_LOST_PKT1 { union { u B; struct {
        	u FIFO_LOST_PKT_CNT_LSB : 8;
        }; }; };
        struct SELF_TEST_CONFIG { union { u B; struct {
        	u EN_GX_ST : 1;
        	u EN_GY_ST : 1;
        	u EN_GZ_ST : 1;
        	u EN_AX_ST : 1;
        	u EN_AY_ST : 1;
        	u EN_AZ_ST : 1;
        	u ACCEL_ST_POWER : 1;
        }; }; };
        struct WHO_AM_I { union { u B; struct {
        	u WHOAMI : 8;
        }; }; };
        struct REG_BANK_SEL { union { u B; struct {
        	u BANK_SEL : 3;
        }; }; };
    } bank0;


    struct bank1_t {
		struct SENSOR_CONFIG0  { union { u B; struct {
		}; }; };
		struct GYRO_CONFIG_STATIC2  { union { u B; struct {
		}; }; };
		struct GYRO_CONFIG_STATIC3  { union { u B; struct {
		}; }; };
		struct GYRO_CONFIG_STATIC4 { union { u B; struct {
		}; }; };
		struct GYRO_CONFIG_STATIC5 { union { u B; struct {
		}; }; };
		struct GYRO_CONFIG_STATIC6 { union { u B; struct {
		}; }; };
		struct GYRO_CONFIG_STATIC7 { union { u B; struct {
		}; }; };
		struct GYRO_CONFIG_STATIC8 { union { u B; struct {
		}; }; };
		struct GYRO_CONFIG_STATIC9 { union { u B; struct {
		}; }; };
		struct GYRO_CONFIG_STATIC10 { union { u B; struct {
		}; }; };
		struct XG_ST_DATA  { union { u B; struct {
		}; }; };
		struct YG_ST_DATA  { union { u B; struct {
		}; }; };
		struct ZG_ST_DATA { union { u B; struct {
		}; }; };
		struct TMSTVAL0 { union { u B; struct {
		}; }; };
		struct TMSTVAL1 { union { u B; struct {
		}; }; };
		struct TMSTVAL2 { union { u B; struct {
		}; }; };
		struct INTF_CONFIG4  { union { u B; struct {
		}; }; };
		struct INTF_CONFIG5  { union { u B; struct {
		}; }; };
	} bank1;


    struct bank2_t {
    	struct ACCEL_CONFIG_STATIC2  { union { u B; struct {
    	}; }; };
    	struct ACCEL_CONFIG_STATIC3 { union { u B; struct {
    	}; }; };
    	struct ACCEL_CONFIG_STATIC4 { union { u B; struct {
    	}; }; };
    	struct XA_ST_DATA  { union { u B; struct {
    	}; }; };
    	struct YA_ST_DATA { union { u B; struct {
    	}; }; };
    	struct ZA_ST_DATA { union { u B; struct {
    	}; }; };
    } bank2;


    struct bank4_t {
    	struct APEX_CONFIG1  { union { u B; struct {
    	}; }; };
    	struct APEX_CONFIG2 { union { u B; struct {
    	}; }; };
    	struct APEX_CONFIG3 { union { u B; struct {
    	}; }; };
    	struct APEX_CONFIG4 { union { u B; struct {
    	}; }; };
    	struct APEX_CONFIG5 { union { u B; struct {
    	}; }; };
    	struct APEX_CONFIG6 { union { u B; struct {
    	}; }; };
    	struct APEX_CONFIG7 { union { u B; struct {
    	}; }; };
    	struct APEX_CONFIG8 { union { u B; struct {
    	}; }; };
    	struct APEX_CONFIG9 { union { u B; struct {
    	}; }; };
    	struct ACCEL_WOM_X_THR  { union { u B; struct {
    	}; }; };
    	struct ACCEL_WOM_Y_THR { union { u B; struct {
    	}; }; };
    	struct ACCEL_WOM_Z_THR { union { u B; struct {
    	}; }; };
    	struct INT_SOURCE6 { union { u B; struct {
    	}; }; };
    	struct INT_SOURCE7 { union { u B; struct {
    	}; }; };
    	struct OFFSET_USER0  { union { u B; struct {
    	}; }; };
    	struct OFFSET_USER1 { union { u B; struct {
    	}; }; };
    	struct OFFSET_USER2 { union { u B; struct {
    	}; }; };
    	struct OFFSET_USER3 { union { u B; struct {
    	}; }; };
    	struct OFFSET_USER4 { union { u B; struct {
    	}; }; };
    	struct OFFSET_USER5 { union { u B; struct {
    	}; }; };
    	struct OFFSET_USER6 { union { u B; struct {
    	}; }; };
    	struct OFFSET_USER7 { union { u B; struct {
    	}; }; };
    	struct OFFSET_USER8  { union { u B; struct {
    	}; }; };
  	} bank4;
};

static struct icm_42605_reg_t icm_42605;

void icm_42605_setup_tap_detection()
{
	icm_42605.bank0.ACCEL_ODR = 15;
	icm_42605.bank0.ACCEL_MODE = 2;
	icm_42605.bank0.ACCEL_LP_CLK_SEL = 0;
	icm_42605.bank0.ACCEL_DEC2_M2_ORD = 2;
	icm_42605.bank0.ACCEL_UI_FILT_BW = 4;
}

void icm_42605_setup_wake_on_motion()
{
	icm_42605.bank0.ACCEL_ODR = 9;
	icm_42605.bank0.ACCEL_MODE = 2;
	icm_42605.bank0.ACCEL_LP_CLK_SEL = 0;
}

void icm_42605_setup_significant_motion()
{
	icm_42605.bank0.ACCEL_ODR = 9;
	icm_42605.bank0.ACCEL_MODE = 2;
	icm_42605.bank0.ACCEL_LP_CLK_SEL = 0;
}

void icm_42605_setup_pedometer()
{
	icm_42605.bank0.ACCEL_ODR = 9;
	icm_42605.bank0.ACCEL_MODE = 2;
	icm_42605.bank0.ACCEL_LP_CLK_SEL = 0;
}

void icm_42605_setup_tilt_detection()
{
	icm_42605.bank0.ACCEL_ODR = 9;
	icm_42605.bank0.ACCEL_MODE = 2;
	icm_42605.bank0.ACCEL_LP_CLK_SEL = 0;
}


void dump_bank0();
void dump_bank1();
void dump_bank2();
void dump_bank4();

#endif //__ICM_42605_H__
