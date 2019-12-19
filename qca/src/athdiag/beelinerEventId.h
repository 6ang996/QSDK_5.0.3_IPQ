/*
 * Copyright (c) 2017 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */
#define TOP_LEVEL_HW_ERR_AND_EVENT_COLLISION_EVENT_ID                           0x0
#define TOP_LEVEL_EVENT_COLLISION_EVENT_ID                                      0x1
#define TOP_LEVEL_HW_ERR_EVENT_ID                                               0x2
#define SCH_HW_ERR_AND_EVENT_COLLISION_EVENT_ID                                 0x0
#define SCH_EVENT_COLLISION_EVENT_ID                                            0x1
#define SCH_HWSCH_CMD_LOAD_EVENT_ID                                             0x24
#define SCH_HWSCH_CMD_START_EVENT_ID                                            0x23
#define SCH_HWSCH_FES_START_EVENT_ID                                            0x22
#define SCH_HWSCH_FES_FETCH_PHASE_EVENT_ID                                      0x21
#define SCH_HWSCH_FES_PREBKOFF_FLUSH_EVENT_ID                                   0x20
#define SCH_HWSCH_FES_TLVO_DONE_EVENT_ID                                        0x1f
#define SCH_HWSCH_FES_START_TX_EVENT_ID                                         0x1e
#define SCH_HWSCH_FES_BURST_CMD_PREFETCH_EVENT_ID                               0x1d
#define SCH_HWSCH_FES_BURST_SCHTLV_DONE_EVENT_ID                                0x1c
#define SCH_HWSCH_FES_STATUS_RCVD_EVENT_ID                                      0x1b
#define SCH_HWSCH_FES_FSTATS_UPDATE_EVENT_ID                                    0x1a
#define SCH_HWSCH_FES_CSTATS_UPDATE_EVENT_ID                                    0x19
#define SCH_HWSCH_FES_TERMINATION_RING15_EVENT_ID                               0x18
#define SCH_HWSCH_FES_TERMINATION_RING14_EVENT_ID                               0x17
#define SCH_HWSCH_FES_TERMINATION_RING13_EVENT_ID                               0x16
#define SCH_HWSCH_FES_TERMINATION_RING12_EVENT_ID                               0x15
#define SCH_HWSCH_FES_TERMINATION_RING11_EVENT_ID                               0x14
#define SCH_HWSCH_FES_TERMINATION_RING10_EVENT_ID                               0x13
#define SCH_HWSCH_FES_TERMINATION_RING9_EVENT_ID                                0x12
#define SCH_HWSCH_FES_TERMINATION_RING8_EVENT_ID                                0x11
#define SCH_HWSCH_FES_TERMINATION_RING7_EVENT_ID                                0x10
#define SCH_HWSCH_FES_TERMINATION_RING6_EVENT_ID                                0xf
#define SCH_HWSCH_FES_TERMINATION_RING5_EVENT_ID                                0xe
#define SCH_HWSCH_FES_TERMINATION_RING4_EVENT_ID                                0xd
#define SCH_HWSCH_FES_TERMINATION_RING3_EVENT_ID                                0xc
#define SCH_HWSCH_FES_TERMINATION_RING2_EVENT_ID                                0xb
#define SCH_HWSCH_FES_TERMINATION_RING1_EVENT_ID                                0xa
#define SCH_HWSCH_FES_TERMINATION_RING0_EVENT_ID                                0x9
#define SCH_HWSCH_FES_TXOP_EVENT_ID                                             0x8
#define SCH_HWSCH_FES_TLVIF_START_EVENT_ID                                      0x7
#define SCH_HWSCH_FES_TLVIF_COMPLETE_EVENT_ID                                   0x6
#define SCH_HWSCH_FES_TLVIF_FLUSH_EVENT_ID                                      0x5
#define SCH_HWSCH_FES_ABORT_EVENT_ID                                            0x4
#define SCH_HWSCH_MTU_CCA_EVENT_ID                                              0x3
#define SCH_HWSCH_ASSERTION_EVENT_EVENT_ID                                      0x2
#define PDG_HW_ERR_AND_EVENT_COLLISION_EVENT_ID                                 0x0
#define PDG_EVENT_COLLISION_EVENT_ID                                            0x1
#define PDG_HW_ERR_EVENT_ID                                                     0x2
#define PDG_WATCHDOG_TIMEOUT_EVENT_ID                                           0x3
#define PDG_GOTO_IDLE_EVENT_ID                                                  0x4
#define PDG_FLUSH_OR_TX_FES_SETUP_EVENT_ID                                      0x5
#define PDG_VALID_TX_FES_SETUP_EVENT_ID                                         0x6
#define PDG_VALID_PDG_REPONSE_EVENT_ID                                          0x7
#define PDG_VALID_PDG_FES_SETUP_EVENT_ID                                        0x8
#define PDG_NEW_AMPDU_LENGTH_EVENT_ID                                           0x9
#define PDG_MPDU_CALC_USER0_END0_EVENT_ID                                       0x10
#define PDG_MPDU_CALC_USER0_END1_EVENT_ID                                       0x11
#define PDG_MPDU_CALC_USER1_END0_EVENT_ID                                       0x12
#define PDG_MPDU_CALC_USER1_END1_EVENT_ID                                       0x13
#define PDG_MPDU_CALC_USER2_END0_EVENT_ID                                       0x14
#define PDG_MPDU_CALC_USER2_END1_EVENT_ID                                       0x15
#define PDG_MPDU_CALC_USER0_TXOP_EXCEED_END_EVENT_ID                            0x16
#define PDG_MPDU_CALC_USER1_TXOP_EXCEED_END_EVENT_ID                            0x17
#define PDG_MPDU_CALC_USER2_TXOP_EXCEED_END_EVENT_ID                            0x18
#define PDG_MPDU_CALC_CHECK_SOME_MPDU_EVENT_ID                                  0x19
#define PDG_MPDU_CALC_CHECK_SOME_MPDU_TXOP_EXCEED_EVENT_ID                      0x20
#define PDG_MAIN_STATE_CHANGE_EVENT_ID                                          0x21
#define PDG_COMP_ENG_STATE_CHANGE_EVENT_ID                                      0x22
#define PDG_COMP_ENG_START_EVENT_ID                                             0x23
#define PDG_COMP_ENG_DONE_EVENT_ID                                              0x24
#define PDG_RESERVED0_EVENT_ID                                                  0x25
#define PDG_RESERVED1_EVENT_ID                                                  0x26
#define PDG_RESERVED2_EVENT_ID                                                  0x27
#define PDG_TXDMA_TO_PDG_IFTLV_EVENT_ID                                         0x28
#define PDG_PDG_TO_HWSCH_IFTLV_EVENT_ID                                         0x29
#define PDG_TXDMA_TO_PDG_IF_TERMINATED_TLV_EVENT_ID                             0x30
#define PDG_PDG_TO_HWSCH_IF_TERMINATED_TLV_EVENT_ID                             0x31
#define PDG_HWSCH_TO_PDG_IF_TLV_EVENT_ID                                        0x32
#define PDG_PDG_TO_TXDMA_IF_TLV_EVENT_ID                                        0x33
#define PDG_HWSCH_TO_PDG_IF_TERMINATED_TLV_EVENT_ID                             0x34
#define PDG_HWSCH_TO_TXPCU_IF_SW_TLV_EVENT_ID                                   0x35
#define PDG_HWSCH_TO_TXPCU_IF_TLV_EVENT_ID                                      0x36
#define TXDMA_HW_ERR_AND_EVENT_COLLISION_EVENT_ID                               0x0
#define TXDMA_EVENT_COLLISION_EVENT_ID                                          0x1
#define TXDMA_HW_ERR_EVENT_ID                                                   0x2
#define TXDMA_EVENT_FES_SETUP_RCVD_EVENT_ID                                     0x3
#define TXDMA_EVENT_BUFFERS_SETUP_RCVD_EVENT_ID                                 0x4
#define TXDMA_EVENT_ALL_REQD_TLVS_RCVD_EVENT_ID                                 0x5
#define TXDMA_EVENT_FLUSH_RCVD_EVENT_ID                                         0x6
#define TXDMA_EVENT_FLUSH_REQ_RCVD_EVENT_ID                                     0x7
#define TXDMA_EVENT_MPDU_LIMIT_STATUS_RCVD_EVENT_ID                             0x8
#define TXDMA_EVENT_OLE_BUF_STATUS_RCVD_EVENT_ID                                0x9
#define TXDMA_EVENT_PCU_BUF_STATUS_RCVD_EVENT_ID                                0xa
#define TXDMA_EVENT_EXCESS_MPDU_USR0_EVENT_ID                                   0xb
#define TXDMA_EVENT_EXCESS_MPDU_USR1_EVENT_ID                                   0xc
#define TXDMA_EVENT_EXCESS_MPDU_USR2_EVENT_ID                                   0xd
#define TXDMA_EVENT_TXDATA_AXI_REQ_MADE_EVENT_ID                                0xe
#define TXDMA_EVENT_CVDATA_AXI_REQ_MADE_EVENT_ID                                0xf
#define TXDMA_EVENT_CV_PHASE_DONE_EVENT_ID                                      0x10
#define TXDMA_EVENT_CV_START_SENT_EVENT_ID                                      0x11
#define TXDMA_EVENT_MPDU_START_SENT_EVENT_ID                                    0x12
#define TXDMA_EVENT_MSDU_START_SENT_EVENT_ID                                    0x13
#define TXDMA_EVENT_DATA_TAG_SENT_EVENT_ID                                      0x14
#define TXDMA_EVENT_MSDU_END_SENT_EVENT_ID                                      0x15
#define TXDMA_EVENT_MPDU_END_SENT_EVENT_ID                                      0x16
#define TXDMA_EVENT_CTRL_STATE_CHANGE_EVENT_ID                                  0x17
#define TXDMA_EVENT_DMA_PHASE_DONE_EVENT_ID                                     0x18
#define TXDMA_EVENT_TXDMA_IDLE_EVENT_ID                                         0x19
#define RXDMA_HW_ERR_AND_EVENT_COLLISION_EVENT_ID                               0x0
#define RXDMA_EVENT_COLLISION_EVENT_ID                                          0x1
#define RXDMA_HW_ERR_EVENT_ID                                                   0x2
#define RXDMA_WATCHDOG_TIMEOUT_EVENT_ID                                         0x3
#define RXDMA_TLV_IS_TYPE_UNKNOWN_EVENT_ID                                      0x4
#define RXDMA_TLV_IS_PPDU_START_EVENT_ID                                        0x5
#define RXDMA_TLV_IS_PPDU_END_EVENT_ID                                          0x6
#define RXDMA_TLV_IS_MPDU_START_EVENT_ID                                        0x7
#define RXDMA_TLV_IS_MPDU_END_EVENT_ID                                          0x8
#define RXDMA_TLV_IS_MSDU_START_EVENT_ID                                        0x9
#define RXDMA_TLV_IS_MSDU_END_EVENT_ID                                          0xa
#define RXDMA_TLV_IS_RX_ATTENTION_EVENT_ID                                      0xb
#define RXDMA_TLV_IS_RX_HEADER_EVENT_ID                                         0xc
#define RXDMA_TLV_IS_RX_PACKET_EVENT_ID                                         0xd
#define RXDMA_TLV_IS_FRAGINFO_EVENT_ID                                          0xe
#define RXDMA_STATE_TLV_START_EVENT_ID                                          0xf
#define RXDMA_RING_HW_IDX_OVERWRITE_EVENT_ID                                    0x10
#define RXDMA_INTR_RING_LWM_EVENT_ID                                            0x11
#define RXDMA_RING_STOP_ACK_EVENT_ID                                            0x12
#define OLE_HW_ERR_AND_EVENT_COLLISION_EVENT_ID                                 0x0
#define OLE_EVENT_COLLISION_EVENT_ID                                            0x1
#define OLE_EVENT_ERROR_EVENT_ID                                                0x2
#define OLE_TX_BAD_FRAME_RECVD_EVENT_ID                                         0x3
#define OLE_TX_FES_SETUP_RECVD_EVENT_ID                                         0x4
#define OLE_TX_QUEUE_EXT_RECVD_EVENT_ID                                         0x5
#define OLE_TX_PEER_ENTRY_RECVD_EVENT_ID                                        0x6
#define OLE_TX_MPDU_START_RECVD_EVENT_ID                                        0x7
#define OLE_TX_MSDU_START_RECVD_EVENT_ID                                        0x8
#define OLE_TX_MSDU_DATA_RECVD_EVENT_ID                                         0x9
#define OLE_TX_MSDU_END_RECVD_EVENT_ID                                          0xa
#define OLE_TX_MPDU_END_RECVD_EVENT_ID                                          0xb
#define OLE_TX_BUFFER_CHAIN_MODE_EVENT_ID                                       0xc
#define OLE_TX_L2_HEADER_PARSING_DONE_EVENT_ID                                  0xd
#define OLE_TX_ENCAPSULATION_DONE_EVENT_ID                                      0xe
#define OLE_TX_DATA_FRAME_WRITTEN_TO_FIFO_EVENT_ID                              0xf
#define OLE_TX_MPDU_HDR_LEN_OVERWRITTEN_EVENT_ID                                0x10
#define OLE_TX_IP_CHECKSUM_OVERWRITTEN_EVENT_ID                                 0x11
#define OLE_TX_IP_TOT_LEN_OVERWRITTEN_EVENT_ID                                  0x12
#define OLE_TX_IP_IDENTIFICATION_OVERWRITTEN_EVENT_ID                           0x13
#define OLE_TX_TCP_SEQ_NUM_WORD1_OVERWRITTEN_EVENT_ID                           0x14
#define OLE_TX_TCP_SEQ_NUM_WORD2_OVERWRITTEN_EVENT_ID                           0x15
#define OLE_TX_TCP_FLAGS_OVERWRITTEN_EVENT_ID                                   0x16
#define OLE_TX_L4_CHECKSUM_OVERWRITTEN_EVENT_ID                                 0x17
#define OLE_TX_COMMAND_FIFO_WRITTEN_EVENT_ID                                    0x18
#define OLE_TX_SHORT_FRAME_RECVD_EVENT_ID                                       0x19
#define OLE_RXOLE_EVENT_WMAC_PARSER_ERR_EVENT_ID                                0x20
#define OLE_RXOLE_EVENT_ETH_PARSER_ERR_EVENT_ID                                 0x21
#define OLE_RXOLE_EVENT_MSDU_LEN_ERR_EVENT_ID                                   0x22
#define OLE_RXOLE_EVENT_PPDU_START_RCVD_EVENT_ID                                0x23
#define OLE_RXOLE_EVENT_MPDU_PCU_START_RCVD_EVENT_ID                            0x24
#define OLE_RXOLE_EVENT_MPDU_PKT_RCVD_EVENT_ID                                  0x25
#define OLE_RXOLE_EVENT_ATTENTION_WR_BUF1_DONE_EVENT_ID                         0x26
#define OLE_RXOLE_EVENT_L4_HDR_DONE_EVENT_ID                                    0x27
#define OLE_RXOLE_EVENT_WMAC_PARSER_DONE_EVENT_ID                               0x28
#define OLE_RXOLE_EVENT_DYN_DECAP_TURNED_OFF_EVENT_ID                           0x29
#define OLE_RXOLE_EVENT_ETH_PARSER_DONE_EVENT_ID                                0x2a
#define OLE_RXOLE_EVENT_HDR_WR_BUF0_DONE_EVENT_ID                               0x2b
#define OLE_RXOLE_EVENT_PPDU_START_WR_BUF1_DONE_EVENT_ID                        0x2c
#define OLE_RXOLE_EVENT_HDR_WR_BUF1_DONE_EVENT_ID                               0x2d
#define OLE_RXOLE_EVENT_MPDU_START_WR_BUF1_DONE_EVENT_ID                        0x2e
#define OLE_RXOLE_EVENT_MSDU_START_WR_BUF1_DONE_EVENT_ID                        0x2f
#define OLE_RXOLE_EVENT_DECAP_TO_ETH_HDR_WR_BUF1_DONE_EVENT_ID                  0x30
#define OLE_RXOLE_EVENT_DECAP_TO_NWIFI_HDR_WR_BUF1_DONE_EVENT_ID                0x31
#define OLE_RXOLE_EVENT_MSDU_PACKET_WR_BUF1_DONE_EVENT_ID                       0x32
#define OLE_RXOLE_EVENT_MSDU_END_WR_BUF1_DONE_EVENT_ID                          0x33
#define OLE_RXOLE_EVENT_TLV_TERM_RCVD_EVENT_ID                                  0x34
#define OLE_RXOLE_EVENT_MPDU_END_WR_BUF1_DONE_EVENT_ID                          0x35
#define OLE_RXOLE_EVENT_PPDU_END_WR_BUF1_DONE_EVENT_ID                          0x36
#define OLE_RXOLE_EVENT_SA_SEARCH_DONE_EVENT_ID                                 0x37
#define OLE_RXOLE_EVENT_DA_SEARCH_DONE_EVENT_ID                                 0x38
#define OLE_RXOLE_EVENT_FRAG_INFO_WR_BUF1_DONE_EVENT_ID                         0x39
#define CRYPTO_HW_ERR_AND_EVENT_COLLISION_EVENT_ID                              0x0
#define CRYPTO_EVENT_COLLISION_EVENT_ID                                         0x1
#define CRYPTO_HW_ERR_EVENT_ID                                                  0x2
#define CRYPTO_TX_FES_SETUP_TLV_START_EVENT_ID                                  0x3
#define CRYPTO_TX_DATA_USR0_TLV_START_EVENT_ID                                  0x4
#define CRYPTO_TX_DATA_USR1_TLV_START_EVENT_ID                                  0x5
#define CRYPTO_TX_DATA_USR2_TLV_START_EVENT_ID                                  0x6
#define CRYPTO_RX_MPDU_START_TLV_START_EVENT_ID                                 0x7
#define CRYPTO_RX_PACKET_TLV_START_EVENT_ID                                     0x8
#define CRYPTO_TX_FLUSH_TLV_REC_EVENT_ID                                        0x9
#define CRYPTO_MIC_LENGTH_CHK_FAIL_EVENT_ID                                     0xa
#define CRYPTO_TX_TLV_OUT_OF_SEQUENCE_EVENT_ID                                  0xb
#define CRYPTO_RX_TLV_OUT_OF_SEQUENCE_EVENT_ID                                  0xc
#define CRYPTO_RX_MIC_ERROR_EVENT_ID                                            0xd
#define CRYPTO_TX_ABORT_EVENT_ID                                                0xe
#define CRYPTO_RX_ABORT_EVENT_ID                                                0xf
#define CRYPTO_TX_FLUSH_REQ_GEN_EVENT_ID                                        0x10
#define CRYPTO_ENCR_START_USR0_EVENT_ID                                         0x11
#define CRYPTO_ENCR_START_USR1_EVENT_ID                                         0x12
#define CRYPTO_ENCR_START_USR2_EVENT_ID                                         0x13
#define CRYPTO_ENCR_END_USR0_EVENT_ID                                           0x14
#define CRYPTO_ENCR_END_USR1_EVENT_ID                                           0x15
#define CRYPTO_ENCR_END_USR2_EVENT_ID                                           0x16
#define CRYPTO_DECR_START_EVENT_ID                                              0x17
#define CRYPTO_DECR_END_EVENT_ID                                                0x18
#define TXPCU_HW_ERR_AND_EVENT_COLLISION_EVENT_ID                               0x0
#define TXPCU_EVENT_COLLISION_EVENT_ID                                          0x1
#define TXPCU_TXPCU_EVENT_ERROR_INTERRUPT_EVENT_ID                              0x2
#define TXPCU_TXPCU_EVENT_RCV_FRAME_EVENT_ID                                    0x3
#define TXPCU_TXPCU_EVENT_CV_FRAME_INVALID_EVENT_ID                             0x4
#define TXPCU_TXPCU_EVENT_RESP_FRAME_LEN_TIMEOUT_EVENT_ID                       0x5
#define TXPCU_TXPCU_EVENT_RESP_FRAME_SENDING_PDG_REQ_EVENT_ID                   0x6
#define TXPCU_TXPCU_EVENT_RESP_FRAME_SIFS_ELAPSED_EVENT_ID                      0x7
#define TXPCU_TXPCU_EVENT_RESP_FRAME_TX_PHY_DESC_INVALID_EVENT_ID               0x8
#define TXPCU_TXPCU_EVENT_RESP_FRAME_START_EVENT_ID                             0x9
#define TXPCU_TXPCU_EVENT_RESP_FRAME_PREAMBLE_TIMEOUT_EVENT_ID                  0xa
#define TXPCU_TXPCU_EVENT_RESP_FRAME_STATUS_NOT_OK_EVENT_ID                     0xb
#define TXPCU_TXPCU_EVENT_RESP_FRAME_WAIT_CCA_CLEAR_EVENT_ID                    0xc
#define TXPCU_TXPCU_EVENT_RESP_FRAME_RCVD_TX_PKT_END_EVENT_ID                   0xd
#define TXPCU_TXPCU_EVENT_RESP_FRAME_END_ERROR_EVENT_ID                         0xe
#define TXPCU_TXPCU_EVENT_RESP_FRAME_END_SUCCESSFUL_EVENT_ID                    0xf
#define TXPCU_TXPCU_EVENT_FES_SETUP_RCVD_EVENT_ID                               0x10
#define TXPCU_TXPCU_EVENT_START_TX_RCVD_EVENT_ID                                0x11
#define TXPCU_TXPCU_EVENT_GEN_FLUSH_RE_EVENT_ID                                 0x12
#define TXPCU_TXPCU_EVENT_PROT_FRAME_START_EVENT_ID                             0x13
#define TXPCU_TXPCU_EVENT_DATA_FRAME_START_EVENT_ID                             0x14
#define TXPCU_TXPCU_EVENT_PROT_FRAME_PREAMBLE_TIMEOUT_EVENT_ID                  0x15
#define TXPCU_TXPCU_EVENT_PROT_FRAME_STATUS_NOT_OK_EVENT_ID                     0x16
#define TXPCU_TXPCU_EVENT_PROT_FRAME_WAIT_CCA_CLEAR_EVENT_ID                    0x17
#define TXPCU_TXPCU_EVENT_PROT_FRAME_RCVD_TX_PKT_END_EVENT_ID                   0x18
#define TXPCU_TXPCU_EVENT_PROT_FRAME_END_EVENT_ID                               0x19
#define TXPCU_TXPCU_EVENT_CTS_RESP_TIMEOUT_EVENT_ID                             0x1a
#define TXPCU_TXPCU_EVENT_CTS_RESP_RCVD_WITH_ERROR_EVENT_ID                     0x1b
#define TXPCU_TXPCU_EVENT_CTS_RESP_RCVD_BW_NOT_AVAIL_EVENT_ID                   0x1c
#define TXPCU_TXPCU_EVENT_CTS_RESP_RCVD_EVENT_ID                                0x1d
#define TXPCU_TXPCU_EVENT_DATA_FRAME_PREAMBLE_TIMEOUT_EVENT_ID                  0x1e
#define TXPCU_TXPCU_EVENT_DATA_FRAME_STATUS_NOT_OK_EVENT_ID                     0x1f
#define TXPCU_TXPCU_EVENT_DATA_FRAME_WAIT_CCA_CLEAR_NDP_EVENT_ID                0x20
#define TXPCU_TXPCU_EVENT_DATA_FRAME_DATA_XFER_START_EVENT_ID                   0x21
#define TXPCU_TXPCU_EVENT_DATA_FRAME_WAIT_MAX_DATA_TIME_EVENT_ID                0x22
#define TXPCU_TXPCU_EVENT_DATA_FRAME_RCVD_TX_PKT_END_EVENT_ID                   0x23
#define TXPCU_TXPCU_EVENT_DATA_FRAME_WAIT_CBF_EVENT_ID                          0x24
#define TXPCU_TXPCU_EVENT_DATA_FRAME_WAIT_CCA_CLEAR_DATA_EVENT_ID               0x25
#define TXPCU_TXPCU_EVENT_DATA_FRAME_STATUS_UPDATE_START_EVENT_ID               0x26
#define TXPCU_TXPCU_EVENT_DATA_FRAME_WAIT_ACK_EVENT_ID                          0x27
#define TXPCU_TXPCU_EVENT_DATA_FRAME_END_EVENT_ID                               0x28
#define TXPCU_TXPCU_EVENT_DATA_FRAME_RCVD_FLUSH_EVENT_ID                        0x29
#define TXPCU_TXPCU_EVENT_SENT_MSG_TLV_EVENT_ID                                 0x2a
#define TXPCU_TXPCU_EVENT_SEND_MPDU_LIMIT_STATUS_EVENT_ID                       0x2b
#define TXPCU_TXPCU_EVENT_CV_START_RCVD_EVENT_ID                                0x2c
#define TXPCU_TXPCU_EVENT_CV_DATA_XFER_START_EVENT_ID                           0x2d
#define TXPCU_TXPCU_EVENT_CV_DATA_XFER_END_EVENT_ID                             0x2e
#define TXPCU_TXPCU_EVENT_SENT_BF_PARAMS_EVENT_ID                               0x2f
#define TXPCU_TXPCU_EVENT_SVD_READY_RCVD_EVENT_ID                               0x30
#define TXPCU_TXPCU_EVENT_STATE_CHANGE_EVENT_ID                                 0x31
#define RXPCU_HW_ERR_AND_EVENT_COLLISION_EVENT_ID                               0x0
#define RXPCU_EVENT_COLLISION_EVENT_ID                                          0x1
#define RXPCU_HW_ERR_EVENT_ID                                                   0x2
#define RXPCU_EVENT_RXSM_STATE_EVENT_ID                                         0x3
#define RXPCU_EVENT_RXSM_WCF_A_WR_EVENT_ID                                      0x4
#define RXPCU_EVENT_RXSM_WCF_B_WR_EVENT_ID                                      0x5
#define RXPCU_EVENT_RXSM_WCF_C_WR_EVENT_ID                                      0x6
#define RXPCU_EVENT_RXSM_IS_DELIMITER_EVENT_ID                                  0x7
#define RXPCU_EVENT_RXSM_FRAME_DONE_EVENT_ID                                    0x8
#define RXPCU_EVENT_RXSM_RESP_REQ_MPDU_EVENT_ID                                 0x9
#define RXPCU_EVENT_RXSM_RESP_REQ_EVENT_ID                                      0xa
#define RXPCU_EVENT_RXSM_RESP_RCV_EVENT_ID                                      0xb
#define RXPCU_EVENT_RXSM_SEND_RX_FRAME_INFO_EVENT_ID                            0xc
#define RXPCU_EVENT_RXSM_RX_PKT_END_DONE_EVENT_ID                               0xd
#define RXPCU_EVENT_RXSM_OVERFLOW_INT_EVENT_ID                                  0xe
#define RXPCU_EVENT_DPSM_LAT_CMD_A_EVENT_ID                                     0xf
#define RXPCU_EVENT_DPSM_ASE_ARB_EVENT_ID                                       0x10
#define RXPCU_EVENT_DPSM_AST_DONE_EVENT_ID                                      0x11
#define RXPCU_EVENT_DPSM_PTE_DONE_EVENT_ID                                      0x12
#define RXPCU_EVENT_DPSM_UPDATE_PPDU_START_VALID_EVENT_ID                       0x13
#define RXPCU_EVENT_DPSM_UPDATE_MPDU_START_DONE_EVENT_ID                        0x14
#define RXPCU_EVENT_DPSM_UPDATE_PTE_DONE_EVENT_ID                               0x15
#define RXPCU_EVENT_DPSM_POP_CMD_B_EVENT_ID                                     0x16
#define RXPCU_EVENT_DPSM_POP_CMD_AC_EVENT_ID                                    0x17
#define RXPCU_EVENT_DPSM_CHECK_TLV_TERMINATE_EVENT_ID                           0x18
#define RXPCU_EVENT_DPSM_UPDATE_MPDU_END_DONE_EVENT_ID                          0x19
#define RXPCU_EVENT_DPSM_UPDATE_PPDU_END_DONE_EVENT_ID                          0x1a
#define RXPCU_EVENT_TRIC_READ_PPDU_START_VALID_EVENT_ID                         0x1b
#define RXPCU_EVENT_TRIC_XFER_MPDU_START_EVENT_ID                               0x1c
#define RXPCU_EVENT_TRIC_XFER_PTE_EVENT_ID                                      0x1d
#define RXPCU_EVENT_TRIC_XFER_DATA_TLV_EVENT_ID                                 0x1e
#define RXPCU_EVENT_TRIC_XFER_MPDU_END_EVENT_ID                                 0x1f
#define RXPCU_EVENT_TRIC_XFER_PPDU_END_EVENT_ID                                 0x20
#define RXPCU_EVENT_TRIC_XFER_TERMINATE_EVENT_ID                                0x21
#define RXPCU_EVENT_TRIC_ALL_DONE_EVENT_ID                                      0x22
#define RXPCU_EVENT_SEND_RX_FRAME_RESP_CBF_EVENT_ID                             0x23
#define RXPCU_EVENT_SEND_RX_MESSAGE_PHY_ON_OFF_NAP_EVENT_ID                     0x24
#define RXPCU_EVENT_SEND_RX_MESSAGE_TXBF_EVENT_ID                               0x25
#define RXPCU_EVENT_SEND_RX_MESSAGE_RTT_IMPBF_EVENT_ID                          0x26
#define RXPCU_EVENT_SEND_RX_FRAME_RESP_DONE_EVENT_ID                            0x27
#define RXPCU_EVENT_TLVIN_RSSI_LEGACY_EVENT_ID                                  0x28
#define RXPCU_EVENT_TLVIN_L_SIG_A_EVENT_ID                                      0x29
#define RXPCU_EVENT_TLVIN_L_SIG_B_EVENT_ID                                      0x2a
#define RXPCU_EVENT_TLVIN_HT_SIG_EVENT_ID                                       0x2b
#define RXPCU_EVENT_TLVIN_VHT_SIG_A_EVENT_ID                                    0x2c
#define RXPCU_EVENT_TLVIN_VHT_SIG_B_EVENT_ID                                    0x2d
#define RXPCU_EVENT_TLVIN_SERVICE_EVENT_ID                                      0x2e
#define RXPCU_EVENT_TLVIN_RX_PKT_END_EVENT_ID                                   0x2f
#define RXPCU_EVENT_TLVIN_RX_PHY_PPDU_END_EVENT_ID                              0x30
#define RXPCU_EVENT_TLVIN_TLV_TERMINATE_EVENT_ID                                0x31
#define SW_HW_ERR_AND_EVENT_COLLISION_EVENT_ID                                  0x0
#define SW_EVENT_COLLISION_EVENT_ID                                             0x1
#define SW_HW_ERR_EVENT_ID                                                      0x2