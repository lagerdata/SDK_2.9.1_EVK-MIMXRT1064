/*
 * Copyright 2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Peripherals v6.0
processor: MIMXRT1064xxxxA
package_id: MIMXRT1064DVL6A
mcu_data: ksdk2_0
processor_version: 6.0.2
board: MIMXRT1064-EVK
functionalGroups:
- name: BOARD_InitPeripherals
  called_from_default_init: true
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'system'
- type_id: 'system_54b53072540eeeb8f8e9343e71f28176'
- global_system_definitions: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'msg'
- type_id: 'msg_6e2baaf3b97dbeef01c0043275f9a0e7'
- global_messages: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "peripherals.h"

/***********************************************************************************************************************
 * BOARD_InitPeripherals functional group
 **********************************************************************************************************************/
/***********************************************************************************************************************
 * DEMO_eDMA initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'DEMO_eDMA'
- type: 'edma'
- mode: 'basic'
- type_id: 'edma_a23fca76a894e1bcdf9d01a687505ff9'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'DMA0'
- config_sets:
  - fsl_edma:
    - common_settings:
      - enableContinuousLinkMode: 'false'
      - enableHaltOnError: 'true'
      - enableRoundRobinArbitration: 'false'
      - enableDebugMode: 'false'
    - dma_table:
      - 0: []
      - 1: []
    - edma_channels: []
    - quick_selection: 'default'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const edma_config_t DEMO_eDMA_config = {.enableContinuousLinkMode    = false,
                                        .enableHaltOnError           = true,
                                        .enableRoundRobinArbitration = false,
                                        .enableDebugMode             = false};

void DEMO_eDMA_init(void)
{
}

/***********************************************************************************************************************
 * DEMO_SAI initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'DEMO_SAI'
- type: 'sai'
- mode: 'edma'
- type_id: 'sai_930e9b093093df3f492b3fa05284d81f'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'SAI1'
- config_sets:
  - fsl_sai:
    - usage: 'record_playback'
    - signal_config:
      - 0:
        - sourceTx: 'Tx'
        - sourceRx: 'Tx'
      - 1:
        - sourceTx: 'Tx'
        - sourceRx: 'Tx'
    - syncSwapI: []
    - bclkTxSetting: []
    - bclkRxSetting: []
    - syncTxSetting: []
    - syncRxSetting: []
    - whole:
      - tx_group:
        - sai_transceiver:
          - bitClock:
            - modeM: 'master'
            - bitClockSource: 'kSAI_BclkSourceMclkOption1'
            - bitClockSourceFreq: 'custom:12288750'
            - bclkPolarityM: 'kSAI_PolarityActiveLow'
            - bclkInputDelayM: 'false'
          - frameSync:
            - modeM: 'master'
            - frameSyncWidthM: '16'
            - frameSyncPolarityM: 'kSAI_PolarityActiveLow'
            - frameSyncEarlyM: 'true'
          - sampleRate_Hz: 'kSAI_SampleRate16KHz'
          - channelMask: 'kSAI_Channel0Mask'
          - serialData:
            - dataMode: 'kSAI_DataPinStateOutputZero'
            - differentFirstWord: 'false'
            - sameDataWordLengthM: 'kSAI_WordWidth16bits'
            - dataOrder: 'kSAI_DataMSB'
            - dataFirstBitShiftedM: '16'
            - dataWordNumM: '2'
            - dataMasked_config:
              - dataMasked_L:
                - 0: 'false'
                - 1: 'false'
                - 2: 'false'
                - 3: 'false'
                - 4: 'false'
                - 5: 'false'
                - 6: 'false'
                - 7: 'false'
                - 8: 'false'
                - 9: 'false'
                - 10: 'false'
                - 11: 'false'
                - 12: 'false'
                - 13: 'false'
                - 14: 'false'
                - 15: 'false'
              - dataMasked_H:
                - 0: 'false'
                - 1: 'false'
                - 2: 'false'
                - 3: 'false'
                - 4: 'false'
                - 5: 'false'
                - 6: 'false'
                - 7: 'false'
                - 8: 'false'
                - 9: 'false'
                - 10: 'false'
                - 11: 'false'
                - 12: 'false'
                - 13: 'false'
                - 14: 'false'
                - 15: 'false'
          - fifo:
            - fifoWatermarkM: '16'
            - fifoPacking: 'kSAI_FifoPackingDisabled'
            - fifoContinueOneError: 'true'
        - edma_group:
          - enable_edma_channel: 'true'
          - edma_channel:
            - eDMAn: '0'
            - eDMA_source: 'kDmaRequestMuxSai1Tx'
            - enable_custom_name: 'true'
            - handle_custom_name: 'dmaTxHandle'
          - sai_edma_handle:
            - enable_custom_name: 'true'
            - handle_custom_name: 'txHandle'
            - init_callback: 'true'
            - callback_fcn: 'txCallback'
            - user_data: ''
      - rx_group:
        - sai_transceiver:
          - bitClock:
            - modeM: 'master'
            - bitClockSource: 'kSAI_BclkSourceMclkDiv'
            - bitClockSourceFreq: 'BOARD_BootClockRUN'
            - bclkPolarityM: 'kSAI_PolarityActiveLow'
            - bclkInputDelayM: 'false'
          - frameSync:
            - modeM: 'master'
            - frameSyncWidthM: '16'
            - frameSyncPolarityM: 'kSAI_PolarityActiveLow'
            - frameSyncEarlyM: 'true'
          - sampleRate_Hz: 'kSAI_SampleRate16KHz'
          - channelMask: 'kSAI_Channel0Mask'
          - serialData:
            - dataMode: 'kSAI_DataPinStateOutputZero'
            - differentFirstWord: 'false'
            - sameDataWordLengthM: 'kSAI_WordWidth16bits'
            - dataOrder: 'kSAI_DataMSB'
            - dataFirstBitShiftedM: '16'
            - dataWordNumM: '2'
            - dataMasked_config:
              - dataMasked_L:
                - 0: 'false'
                - 1: 'false'
                - 2: 'false'
                - 3: 'false'
                - 4: 'false'
                - 5: 'false'
                - 6: 'false'
                - 7: 'false'
                - 8: 'false'
                - 9: 'false'
                - 10: 'false'
                - 11: 'false'
                - 12: 'false'
                - 13: 'false'
                - 14: 'false'
                - 15: 'false'
              - dataMasked_H:
                - 0: 'false'
                - 1: 'false'
                - 2: 'false'
                - 3: 'false'
                - 4: 'false'
                - 5: 'false'
                - 6: 'false'
                - 7: 'false'
                - 8: 'false'
                - 9: 'false'
                - 10: 'false'
                - 11: 'false'
                - 12: 'false'
                - 13: 'false'
                - 14: 'false'
                - 15: 'false'
          - fifo:
            - fifoWatermarkM: '16'
            - fifoPacking: 'kSAI_FifoPackingDisabled'
            - fifoContinueOneError: 'true'
        - edma_group:
          - enable_edma_channel: 'true'
          - edma_channel:
            - eDMAn: '1'
            - eDMA_source: 'kDmaRequestMuxSai1Rx'
            - enable_custom_name: 'true'
            - handle_custom_name: 'dmaRxHandle'
          - sai_edma_handle:
            - enable_custom_name: 'true'
            - handle_custom_name: 'rxHandle'
            - init_callback: 'true'
            - callback_fcn: 'rxCallback'
            - user_data: ''
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
/* DEMO_SAI Tx configuration */
sai_transceiver_t DEMO_SAI_Tx_config = {
    .masterSlave = kSAI_Master,
    .bitClock    = {.bclkSrcSwap    = false,
                 .bclkSource     = kSAI_BclkSourceMclkOption1,
                 .bclkPolarity   = kSAI_PolarityActiveLow,
                 .bclkInputDelay = false},
    .frameSync =
        {
            .frameSyncWidth    = 16U,
            .frameSyncPolarity = kSAI_PolarityActiveLow,
            .frameSyncEarly    = true,
        },
    .syncMode     = kSAI_ModeAsync,
    .channelMask  = kSAI_Channel0Mask,
    .startChannel = 0U,
    .endChannel   = 0U,
    .channelNums  = 1U,
    .serialData   = {.dataMode            = kSAI_DataPinStateOutputZero,
                   .dataWord0Length     = (uint8_t)kSAI_WordWidth16bits,
                   .dataWordNLength     = (uint8_t)kSAI_WordWidth16bits,
                   .dataWordLength      = (uint8_t)kSAI_WordWidth16bits,
                   .dataOrder           = kSAI_DataMSB,
                   .dataFirstBitShifted = 16U,
                   .dataWordNum         = 2U,
                   .dataMaskedWord      = 0x0U},
    .fifo         = {.fifoWatermark = 16U, .fifoPacking = kSAI_FifoPackingDisabled, .fifoContinueOneError = true}};
/* DEMO_SAI Rx configuration */
sai_transceiver_t DEMO_SAI_Rx_config = {
    .masterSlave = kSAI_Master,
    .bitClock    = {.bclkSrcSwap    = false,
                 .bclkSource     = kSAI_BclkSourceMclkOption1,
                 .bclkPolarity   = kSAI_PolarityActiveLow,
                 .bclkInputDelay = false},
    .frameSync =
        {
            .frameSyncWidth    = 16U,
            .frameSyncPolarity = kSAI_PolarityActiveLow,
            .frameSyncEarly    = true,
        },
    .syncMode     = kSAI_ModeSync,
    .channelMask  = kSAI_Channel0Mask,
    .startChannel = 0U,
    .endChannel   = 0U,
    .channelNums  = 1U,
    .serialData   = {.dataMode            = kSAI_DataPinStateOutputZero,
                   .dataWord0Length     = (uint8_t)kSAI_WordWidth16bits,
                   .dataWordNLength     = (uint8_t)kSAI_WordWidth16bits,
                   .dataWordLength      = (uint8_t)kSAI_WordWidth16bits,
                   .dataOrder           = kSAI_DataMSB,
                   .dataFirstBitShifted = 16U,
                   .dataWordNum         = 2U,
                   .dataMaskedWord      = 0x0U},
    .fifo         = {.fifoWatermark = 16U, .fifoPacking = kSAI_FifoPackingDisabled, .fifoContinueOneError = true}};
edma_handle_t dmaTxHandle;
edma_handle_t dmaRxHandle;
AT_NONCACHEABLE_SECTION_INIT(sai_edma_handle_t txHandle) = {0};
AT_NONCACHEABLE_SECTION_INIT(sai_edma_handle_t rxHandle) = {0};

void DEMO_SAI_init(void)
{
    /* Set the source kDmaRequestMuxSai1Tx request in the DMAMUX */
    DMAMUX_SetSource(DEMO_SAI_TX_DMAMUX_BASEADDR, DEMO_SAI_TX_DMA_CHANNEL, DEMO_SAI_TX_DMA_REQUEST);
    /* Enable the 0 channel in the DMAMUX */
    DMAMUX_EnableChannel(DEMO_SAI_TX_DMAMUX_BASEADDR, DEMO_SAI_TX_DMA_CHANNEL);
    /* Set the source kDmaRequestMuxSai1Rx request in the DMAMUX */
    DMAMUX_SetSource(DEMO_SAI_RX_DMAMUX_BASEADDR, DEMO_SAI_RX_DMA_CHANNEL, DEMO_SAI_RX_DMA_REQUEST);
    /* Enable the 1 channel in the DMAMUX */
    DMAMUX_EnableChannel(DEMO_SAI_RX_DMAMUX_BASEADDR, DEMO_SAI_RX_DMA_CHANNEL);
    /* Create the eDMA dmaTxHandle handle */
    EDMA_CreateHandle(&dmaTxHandle, DEMO_SAI_TX_DMA_BASEADDR, DEMO_SAI_TX_DMA_CHANNEL);
    /* Create the eDMA dmaRxHandle handle */
    EDMA_CreateHandle(&dmaRxHandle, DEMO_SAI_RX_DMA_BASEADDR, DEMO_SAI_RX_DMA_CHANNEL);
    /* Initialize SAI clock gate */
    SAI_Init(DEMO_SAI_PERIPHERAL);
    /* Create the SAI Tx eDMA handle */
    SAI_TransferTxCreateHandleEDMA(DEMO_SAI_PERIPHERAL, &txHandle, txCallback, NULL, &dmaTxHandle);
    /* Create the SAI Rx eDMA handle */
    SAI_TransferRxCreateHandleEDMA(DEMO_SAI_PERIPHERAL, &rxHandle, rxCallback, NULL, &dmaRxHandle);
    /* Configures SAI Tx sub-module functionality */
    SAI_TransferTxSetConfigEDMA(DEMO_SAI_PERIPHERAL, &txHandle, &DEMO_SAI_Tx_config);
    /* Configures SAI Rx sub-module functionality */
    SAI_TransferRxSetConfigEDMA(DEMO_SAI_PERIPHERAL, &rxHandle, &DEMO_SAI_Rx_config);
    /* Set up SAI Tx bitclock rate by calculation of divider. */
    SAI_TxSetBitClockRate(DEMO_SAI_PERIPHERAL, DEMO_SAI_TX_BCLK_SOURCE_CLOCK_HZ, DEMO_SAI_TX_SAMPLE_RATE,
                          DEMO_SAI_TX_WORD_WIDTH, DEMO_SAI_TX_WORDS_PER_FRAME);
    /* Set up SAI Rx bitclock rate by calculation of divider. */
    SAI_RxSetBitClockRate(DEMO_SAI_PERIPHERAL, DEMO_SAI_RX_BCLK_SOURCE_CLOCK_HZ, DEMO_SAI_RX_SAMPLE_RATE,
                          DEMO_SAI_RX_WORD_WIDTH, DEMO_SAI_RX_WORDS_PER_FRAME);
}

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void)
{
    /* Global initialization */
    DMAMUX_Init(DEMO_EDMA_DMAMUX_BASEADDR);
    EDMA_Init(DEMO_EDMA_DMA_BASEADDR, &DEMO_eDMA_config);

    /* Initialize components */
    DEMO_eDMA_init();
    DEMO_SAI_init();
}

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void)
{
    BOARD_InitPeripherals();
}
