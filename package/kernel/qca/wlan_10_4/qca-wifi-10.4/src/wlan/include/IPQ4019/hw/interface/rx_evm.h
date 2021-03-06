// Copyright (c) 2013 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _RX_EVM_H_
#define _RX_EVM_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	evm_p0_s0[7:0], evm_p0_s1[15:8], evm_p0_s2[23:16], evm_p0_s3[31:24]
//	1	evm_p1_s0[7:0], evm_p1_s1[15:8], evm_p1_s2[23:16], evm_p1_s3[31:24]
//	2	evm_p2_s0[7:0], evm_p2_s1[15:8], evm_p2_s2[23:16], evm_p2_s3[31:24]
//	3	evm_p3_s0[7:0], evm_p3_s1[15:8], evm_p3_s2[23:16], evm_p3_s3[31:24]
//	4	evm_p4_s0[7:0], evm_p4_s1[15:8], evm_p4_s2[23:16], evm_p4_s3[31:24]
//	5	evm_p5_s0[7:0], evm_p5_s1[15:8], evm_p5_s2[23:16], evm_p5_s3[31:24]
//	6	evm_p6_s0[7:0], evm_p6_s1[15:8], evm_p6_s2[23:16], evm_p6_s3[31:24]
//	7	evm_p7_s0[7:0], evm_p7_s1[15:8], evm_p7_s2[23:16], evm_p7_s3[31:24]
//	8	evm_p8_s0[7:0], evm_p8_s1[15:8], evm_p8_s2[23:16], evm_p8_s3[31:24]
//	9	evm_p9_s0[7:0], evm_p9_s1[15:8], evm_p9_s2[23:16], evm_p9_s3[31:24]
//	10	evm_p10_s0[7:0], evm_p10_s1[15:8], evm_p10_s2[23:16], evm_p10_s3[31:24]
//	11	evm_p11_s0[7:0], evm_p11_s1[15:8], evm_p11_s2[23:16], evm_p11_s3[31:24]
//	12	evm_p12_s0[7:0], evm_p12_s1[15:8], evm_p12_s2[23:16], evm_p12_s3[31:24]
//	13	evm_p13_s0[7:0], evm_p13_s1[15:8], evm_p13_s2[23:16], evm_p13_s3[31:24]
//	14	evm_p14_s0[7:0], evm_p14_s1[15:8], evm_p14_s2[23:16], evm_p14_s3[31:24]
//	15	evm_p15_s0[7:0], evm_p15_s1[15:8], evm_p15_s2[23:16], evm_p15_s3[31:24]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_RX_EVM 16

struct rx_evm {
    volatile uint32_t evm_p0_s0                       :  8, //[7:0]
                      evm_p0_s1                       :  8, //[15:8]
                      evm_p0_s2                       :  8, //[23:16]
                      evm_p0_s3                       :  8; //[31:24]
    volatile uint32_t evm_p1_s0                       :  8, //[7:0]
                      evm_p1_s1                       :  8, //[15:8]
                      evm_p1_s2                       :  8, //[23:16]
                      evm_p1_s3                       :  8; //[31:24]
    volatile uint32_t evm_p2_s0                       :  8, //[7:0]
                      evm_p2_s1                       :  8, //[15:8]
                      evm_p2_s2                       :  8, //[23:16]
                      evm_p2_s3                       :  8; //[31:24]
    volatile uint32_t evm_p3_s0                       :  8, //[7:0]
                      evm_p3_s1                       :  8, //[15:8]
                      evm_p3_s2                       :  8, //[23:16]
                      evm_p3_s3                       :  8; //[31:24]
    volatile uint32_t evm_p4_s0                       :  8, //[7:0]
                      evm_p4_s1                       :  8, //[15:8]
                      evm_p4_s2                       :  8, //[23:16]
                      evm_p4_s3                       :  8; //[31:24]
    volatile uint32_t evm_p5_s0                       :  8, //[7:0]
                      evm_p5_s1                       :  8, //[15:8]
                      evm_p5_s2                       :  8, //[23:16]
                      evm_p5_s3                       :  8; //[31:24]
    volatile uint32_t evm_p6_s0                       :  8, //[7:0]
                      evm_p6_s1                       :  8, //[15:8]
                      evm_p6_s2                       :  8, //[23:16]
                      evm_p6_s3                       :  8; //[31:24]
    volatile uint32_t evm_p7_s0                       :  8, //[7:0]
                      evm_p7_s1                       :  8, //[15:8]
                      evm_p7_s2                       :  8, //[23:16]
                      evm_p7_s3                       :  8; //[31:24]
    volatile uint32_t evm_p8_s0                       :  8, //[7:0]
                      evm_p8_s1                       :  8, //[15:8]
                      evm_p8_s2                       :  8, //[23:16]
                      evm_p8_s3                       :  8; //[31:24]
    volatile uint32_t evm_p9_s0                       :  8, //[7:0]
                      evm_p9_s1                       :  8, //[15:8]
                      evm_p9_s2                       :  8, //[23:16]
                      evm_p9_s3                       :  8; //[31:24]
    volatile uint32_t evm_p10_s0                      :  8, //[7:0]
                      evm_p10_s1                      :  8, //[15:8]
                      evm_p10_s2                      :  8, //[23:16]
                      evm_p10_s3                      :  8; //[31:24]
    volatile uint32_t evm_p11_s0                      :  8, //[7:0]
                      evm_p11_s1                      :  8, //[15:8]
                      evm_p11_s2                      :  8, //[23:16]
                      evm_p11_s3                      :  8; //[31:24]
    volatile uint32_t evm_p12_s0                      :  8, //[7:0]
                      evm_p12_s1                      :  8, //[15:8]
                      evm_p12_s2                      :  8, //[23:16]
                      evm_p12_s3                      :  8; //[31:24]
    volatile uint32_t evm_p13_s0                      :  8, //[7:0]
                      evm_p13_s1                      :  8, //[15:8]
                      evm_p13_s2                      :  8, //[23:16]
                      evm_p13_s3                      :  8; //[31:24]
    volatile uint32_t evm_p14_s0                      :  8, //[7:0]
                      evm_p14_s1                      :  8, //[15:8]
                      evm_p14_s2                      :  8, //[23:16]
                      evm_p14_s3                      :  8; //[31:24]
    volatile uint32_t evm_p15_s0                      :  8, //[7:0]
                      evm_p15_s1                      :  8, //[15:8]
                      evm_p15_s2                      :  8, //[23:16]
                      evm_p15_s3                      :  8; //[31:24]
};

/*

evm_p0_s0
			
			EVM Pilot 0 Stream 0 (valid for all BW)(valid for 1
			stream)  <legal all>

evm_p0_s1
			
			EVM Pilot 0 Stream 1 (valid for all BW)(valid for 2
			streams)  <legal all>

evm_p0_s2
			
			EVM Pilot 0 Stream 2 (valid for all BW)(valid for 3
			streams)  <legal all>

evm_p0_s3
			
			EVM Pilot 0 Stream 3 (valid for all BW)(valid for 4
			streams) <legal all>

evm_p1_s0
			
			EVM Pilot 1 Stream 0 (valid for all BW)(valid for 1
			stream)  <legal all>

evm_p1_s1
			
			EVM Pilot 1 Stream 1 (Valid for all BW)(valid for 2
			streams)  <legal all>

evm_p1_s2
			
			EVM Pilot 1 Stream 2 (Valid for all BW)(valid for 3
			streams)  <legal all>

evm_p1_s3
			
			EVM Pilot 1 Stream 3 (Valid for all BW)(valid for 4
			streams) <legal all>

evm_p2_s0
			
			EVM Pilot 2 Stream 0 (Valid for all BW)(valid for 1
			stream)  <legal all>

evm_p2_s1
			
			EVM Pilot 2 Stream 1 (Valid for all BW)(valid for 2
			streams)  <legal all>

evm_p2_s2
			
			EVM Pilot 2 Stream 2 (Valid for all BW)(valid for 3
			streams)  <legal all>

evm_p2_s3
			
			EVM Pilot 2 Stream 3 (Valid for all BW)(valid for 4
			streams) <legal all>

evm_p3_s0
			
			EVM Pilot 3 Stream 0 (Valid for all BW)(valid for 1
			stream)  <legal all>

evm_p3_s1
			
			EVM Pilot 3 Stream 1 (Valid for all BW)(valid for 2
			streams)  <legal all>

evm_p3_s2
			
			EVM Pilot 3 Stream 2 (Valid for all BW)(valid for 3
			streams)  <legal all>

evm_p3_s3
			
			EVM Pilot 3 Stream 3 (Valid for all BW)(valid for 3
			streams) <legal all>

evm_p4_s0
			
			EVM Pilot 4 Stream 0 (Valid for 40, 80, 160 MHz
			BW)(valid for 1 stream)  <legal all>

evm_p4_s1
			
			EVM Pilot 4 Stream 1 (Valid for 40, 80, 160 MHz
			BW)(valid for 2 streams)  <legal all>

evm_p4_s2
			
			EVM Pilot 4 Stream 2 (Valid for 40, 80, 160 MHz
			BW)(valid for 3 streams)  <legal all>

evm_p4_s3
			
			EVM Pilot 4 Stream 3 (Valid for 40, 80, 160 MHz
			BW)(valid for 4 streams) <legal all>

evm_p5_s0
			
			EVM Pilot 5 Stream 0 (Valid for 40, 80, 160 MHz
			BW)(valid for 1 stream)  <legal all>

evm_p5_s1
			
			EVM Pilot 5 Stream 1 (Valid for 40, 80, 160 MHz
			BW)(valid for 2 streams)  <legal all>

evm_p5_s2
			
			EVM Pilot 5 Stream 2 (Valid for 40, 80, 160 MHz
			BW)(valid for 3 streams)  <legal all>

evm_p5_s3
			
			EVM Pilot 5 Stream 3 (Valid for 40, 80, 160 MHz
			BW)(valid for 4 streams) <legal all>

evm_p6_s0
			
			EVM Pilot 6 Stream 0 (Valid for 80, 160 MHz BW)(valid
			for 1 stream)  <legal all>

evm_p6_s1
			
			EVM Pilot 6 Stream 1 (Valid for 80, 160 MHz BW)(valid
			for 2 streams)  <legal all>

evm_p6_s2
			
			EVM Pilot 6 Stream 2 (Valid for 80, 160 MHz BW)(valid
			for 3 streams)  <legal all>

evm_p6_s3
			
			EVM Pilot 6 Stream 3 (Valid for 80, 160 MHz BW)(valid
			for 4 streams) <legal all>

evm_p7_s0
			
			EVM Pilot 7 Stream 0 (Valid for 80, 160 MHz BW)(valid
			for 1 stream)  <legal all>

evm_p7_s1
			
			EVM Pilot 7 Stream 1 (Valid for 80, 160 MHz BW)(valid
			for 2 streams)  <legal all>

evm_p7_s2
			
			EVM Pilot 7 Stream 2 (Valid for 80, 160 MHz BW)(valid
			for 3 streams)  <legal all>

evm_p7_s3
			
			EVM Pilot 7 Stream 3 (Valid for 80, 160 MHz BW)(valid
			for 4 streams) <legal all>

evm_p8_s0
			
			EVM Pilot 8 Stream 0 (Valid for 160 MHz BW)(valid for 1
			stream) (Unsupported) (optional) <legal 0>

evm_p8_s1
			
			EVM Pilot 8 Stream 1 (Valid for 160 MHz BW)(valid for 2
			streams) (Unsupported) (optional) <legal 0>

evm_p8_s2
			
			EVM Pilot 8 Stream 2 (Valid for 160 MHz BW)(valid for 3
			streams) (Unsupported) (optional) <legal 0>

evm_p8_s3
			
			EVM Pilot 8 Stream 3 (Valid for 160 MHz BW)(valid for 4
			streams) (Unsupported) (optional) <legal 0>

evm_p9_s0
			
			EVM Pilot 9 Stream 0 (Valid for 160 MHz BW)(valid for 1
			stream) (Unsupported) (optional) <legal 0>

evm_p9_s1
			
			EVM Pilot 9 Stream 1 (Valid for 160 MHz BW)(valid for 2
			streams) (Unsupported) (optional) <legal 0>

evm_p9_s2
			
			EVM Pilot 9 Stream 2 (Valid for 160 MHz BW)(valid for 3
			streams) (Unsupported) (optional) <legal 0>

evm_p9_s3
			
			EVM Pilot 9 Stream 3 (Valid for 160 MHz BW)(valid for 4
			streams) (Unsupported) (optional) <legal 0>

evm_p10_s0
			
			EVM Pilot 10 Stream 0 (Valid for 160 MHz BW)(valid for 1
			stream) (Unsupported) (optional) <legal 0>

evm_p10_s1
			
			EVM Pilot 10 Stream 1 (Valid for 160 MHz BW)(valid for 2
			streams) (Unsupported) (optional) <legal 0>

evm_p10_s2
			
			EVM Pilot 10 Stream 2 (Valid for 160 MHz BW)(valid for 3
			streams) (Unsupported) (optional) <legal 0>

evm_p10_s3
			
			EVM Pilot 10 Stream 3 (Valid for 160 MHz BW)(valid for 4
			streams) (Unsupported) (optional) <legal 0>

evm_p11_s0
			
			EVM Pilot 11 Stream 0 (Valid for 160 MHz BW)(valid for 1
			stream) (Unsupported) (optional) <legal 0>

evm_p11_s1
			
			EVM Pilot 11 Stream 1 (Valid for 160 MHz BW)(valid for 2
			streams) (Unsupported) (optional) <legal 0>

evm_p11_s2
			
			EVM Pilot 11 Stream 2 (Valid for 160 MHz BW)(valid for 3
			streams) (Unsupported) (optional) <legal 0>

evm_p11_s3
			
			EVM Pilot 11 Stream 3 (Valid for 160 MHz BW)(valid for 4
			streams) (Unsupported) (optional) <legal 0>

evm_p12_s0
			
			EVM Pilot 12 Stream 0 (Valid for 160 MHz BW)(valid for 1
			stream) (Unsupported) (optional) <legal 0>

evm_p12_s1
			
			EVM Pilot 12 Stream 1 (Valid for 160 MHz BW)(valid for 2
			streams) (Unsupported) (optional) <legal 0>

evm_p12_s2
			
			EVM Pilot 12 Stream 2 (Valid for 160 MHz BW)(valid for 3
			streams) (Unsupported) (optional) <legal 0>

evm_p12_s3
			
			EVM Pilot 12 Stream 3 (Valid for 160 MHz BW)(valid for 4
			streams) (Unsupported) (optional) <legal 0>

evm_p13_s0
			
			EVM Pilot 13 Stream 0 (Valid for 160 MHz BW)(valid for 1
			stream) (Unsupported) (optional) <legal 0>

evm_p13_s1
			
			EVM Pilot 13 Stream 1 (Valid for 160 MHz BW)(valid for 2
			streams) (Unsupported) (optional) <legal 0>

evm_p13_s2
			
			EVM Pilot 13 Stream 2 (Valid for 160 MHz BW)(valid for 3
			streams) (Unsupported) (optional) <legal 0>

evm_p13_s3
			
			EVM Pilot 13 Stream 3 (Valid for 160 MHz BW)(valid for 4
			streams) (Unsupported) (optional) <legal 0>

evm_p14_s0
			
			EVM Pilot 14 Stream 0 (Valid for 160 MHz BW)(valid for 1
			stream) (Unsupported) (optional) <legal 0>

evm_p14_s1
			
			EVM Pilot 14 Stream 1 (Valid for 160 MHz BW)(valid for 2
			streams) (Unsupported) (optional) <legal 0>

evm_p14_s2
			
			EVM Pilot 14 Stream 2 (Valid for 160 MHz BW)(valid for 3
			streams) (Unsupported) (optional) <legal 0>

evm_p14_s3
			
			EVM Pilot 14 Stream 3 (Valid for 160 MHz BW)(valid for 4
			streams) (Unsupported) (optional) <legal 0>

evm_p15_s0
			
			EVM Pilot 15 Stream 0 (Valid for 160 MHz BW)(valid for 1
			stream) (Unsupported) (optional) <legal 0>

evm_p15_s1
			
			EVM Pilot 15 Stream 1 (Valid for 160 MHz BW)(valid for 2
			streams) (Unsupported) (optional) <legal 0>

evm_p15_s2
			
			EVM Pilot 15 Stream 2 (Valid for 160 MHz BW)(valid for 3
			streams) (Unsupported) (optional) <legal 0>

evm_p15_s3
			
			EVM Pilot 15 Stream 3 (Valid for 160 MHz BW)(valid for 4
			streams) (Unsupported) (optional) <legal 0>
*/


/* Description		RX_EVM_0_EVM_P0_S0
			
			EVM Pilot 0 Stream 0 (valid for all BW)(valid for 1
			stream)  <legal all>
*/
#define RX_EVM_0_EVM_P0_S0_OFFSET                                    0x00000000
#define RX_EVM_0_EVM_P0_S0_LSB                                       0
#define RX_EVM_0_EVM_P0_S0_MASK                                      0x000000ff

/* Description		RX_EVM_0_EVM_P0_S1
			
			EVM Pilot 0 Stream 1 (valid for all BW)(valid for 2
			streams)  <legal all>
*/
#define RX_EVM_0_EVM_P0_S1_OFFSET                                    0x00000000
#define RX_EVM_0_EVM_P0_S1_LSB                                       8
#define RX_EVM_0_EVM_P0_S1_MASK                                      0x0000ff00

/* Description		RX_EVM_0_EVM_P0_S2
			
			EVM Pilot 0 Stream 2 (valid for all BW)(valid for 3
			streams)  <legal all>
*/
#define RX_EVM_0_EVM_P0_S2_OFFSET                                    0x00000000
#define RX_EVM_0_EVM_P0_S2_LSB                                       16
#define RX_EVM_0_EVM_P0_S2_MASK                                      0x00ff0000

/* Description		RX_EVM_0_EVM_P0_S3
			
			EVM Pilot 0 Stream 3 (valid for all BW)(valid for 4
			streams) <legal all>
*/
#define RX_EVM_0_EVM_P0_S3_OFFSET                                    0x00000000
#define RX_EVM_0_EVM_P0_S3_LSB                                       24
#define RX_EVM_0_EVM_P0_S3_MASK                                      0xff000000

/* Description		RX_EVM_1_EVM_P1_S0
			
			EVM Pilot 1 Stream 0 (valid for all BW)(valid for 1
			stream)  <legal all>
*/
#define RX_EVM_1_EVM_P1_S0_OFFSET                                    0x00000004
#define RX_EVM_1_EVM_P1_S0_LSB                                       0
#define RX_EVM_1_EVM_P1_S0_MASK                                      0x000000ff

/* Description		RX_EVM_1_EVM_P1_S1
			
			EVM Pilot 1 Stream 1 (Valid for all BW)(valid for 2
			streams)  <legal all>
*/
#define RX_EVM_1_EVM_P1_S1_OFFSET                                    0x00000004
#define RX_EVM_1_EVM_P1_S1_LSB                                       8
#define RX_EVM_1_EVM_P1_S1_MASK                                      0x0000ff00

/* Description		RX_EVM_1_EVM_P1_S2
			
			EVM Pilot 1 Stream 2 (Valid for all BW)(valid for 3
			streams)  <legal all>
*/
#define RX_EVM_1_EVM_P1_S2_OFFSET                                    0x00000004
#define RX_EVM_1_EVM_P1_S2_LSB                                       16
#define RX_EVM_1_EVM_P1_S2_MASK                                      0x00ff0000

/* Description		RX_EVM_1_EVM_P1_S3
			
			EVM Pilot 1 Stream 3 (Valid for all BW)(valid for 4
			streams) <legal all>
*/
#define RX_EVM_1_EVM_P1_S3_OFFSET                                    0x00000004
#define RX_EVM_1_EVM_P1_S3_LSB                                       24
#define RX_EVM_1_EVM_P1_S3_MASK                                      0xff000000

/* Description		RX_EVM_2_EVM_P2_S0
			
			EVM Pilot 2 Stream 0 (Valid for all BW)(valid for 1
			stream)  <legal all>
*/
#define RX_EVM_2_EVM_P2_S0_OFFSET                                    0x00000008
#define RX_EVM_2_EVM_P2_S0_LSB                                       0
#define RX_EVM_2_EVM_P2_S0_MASK                                      0x000000ff

/* Description		RX_EVM_2_EVM_P2_S1
			
			EVM Pilot 2 Stream 1 (Valid for all BW)(valid for 2
			streams)  <legal all>
*/
#define RX_EVM_2_EVM_P2_S1_OFFSET                                    0x00000008
#define RX_EVM_2_EVM_P2_S1_LSB                                       8
#define RX_EVM_2_EVM_P2_S1_MASK                                      0x0000ff00

/* Description		RX_EVM_2_EVM_P2_S2
			
			EVM Pilot 2 Stream 2 (Valid for all BW)(valid for 3
			streams)  <legal all>
*/
#define RX_EVM_2_EVM_P2_S2_OFFSET                                    0x00000008
#define RX_EVM_2_EVM_P2_S2_LSB                                       16
#define RX_EVM_2_EVM_P2_S2_MASK                                      0x00ff0000

/* Description		RX_EVM_2_EVM_P2_S3
			
			EVM Pilot 2 Stream 3 (Valid for all BW)(valid for 4
			streams) <legal all>
*/
#define RX_EVM_2_EVM_P2_S3_OFFSET                                    0x00000008
#define RX_EVM_2_EVM_P2_S3_LSB                                       24
#define RX_EVM_2_EVM_P2_S3_MASK                                      0xff000000

/* Description		RX_EVM_3_EVM_P3_S0
			
			EVM Pilot 3 Stream 0 (Valid for all BW)(valid for 1
			stream)  <legal all>
*/
#define RX_EVM_3_EVM_P3_S0_OFFSET                                    0x0000000c
#define RX_EVM_3_EVM_P3_S0_LSB                                       0
#define RX_EVM_3_EVM_P3_S0_MASK                                      0x000000ff

/* Description		RX_EVM_3_EVM_P3_S1
			
			EVM Pilot 3 Stream 1 (Valid for all BW)(valid for 2
			streams)  <legal all>
*/
#define RX_EVM_3_EVM_P3_S1_OFFSET                                    0x0000000c
#define RX_EVM_3_EVM_P3_S1_LSB                                       8
#define RX_EVM_3_EVM_P3_S1_MASK                                      0x0000ff00

/* Description		RX_EVM_3_EVM_P3_S2
			
			EVM Pilot 3 Stream 2 (Valid for all BW)(valid for 3
			streams)  <legal all>
*/
#define RX_EVM_3_EVM_P3_S2_OFFSET                                    0x0000000c
#define RX_EVM_3_EVM_P3_S2_LSB                                       16
#define RX_EVM_3_EVM_P3_S2_MASK                                      0x00ff0000

/* Description		RX_EVM_3_EVM_P3_S3
			
			EVM Pilot 3 Stream 3 (Valid for all BW)(valid for 3
			streams) <legal all>
*/
#define RX_EVM_3_EVM_P3_S3_OFFSET                                    0x0000000c
#define RX_EVM_3_EVM_P3_S3_LSB                                       24
#define RX_EVM_3_EVM_P3_S3_MASK                                      0xff000000

/* Description		RX_EVM_4_EVM_P4_S0
			
			EVM Pilot 4 Stream 0 (Valid for 40, 80, 160 MHz
			BW)(valid for 1 stream)  <legal all>
*/
#define RX_EVM_4_EVM_P4_S0_OFFSET                                    0x00000010
#define RX_EVM_4_EVM_P4_S0_LSB                                       0
#define RX_EVM_4_EVM_P4_S0_MASK                                      0x000000ff

/* Description		RX_EVM_4_EVM_P4_S1
			
			EVM Pilot 4 Stream 1 (Valid for 40, 80, 160 MHz
			BW)(valid for 2 streams)  <legal all>
*/
#define RX_EVM_4_EVM_P4_S1_OFFSET                                    0x00000010
#define RX_EVM_4_EVM_P4_S1_LSB                                       8
#define RX_EVM_4_EVM_P4_S1_MASK                                      0x0000ff00

/* Description		RX_EVM_4_EVM_P4_S2
			
			EVM Pilot 4 Stream 2 (Valid for 40, 80, 160 MHz
			BW)(valid for 3 streams)  <legal all>
*/
#define RX_EVM_4_EVM_P4_S2_OFFSET                                    0x00000010
#define RX_EVM_4_EVM_P4_S2_LSB                                       16
#define RX_EVM_4_EVM_P4_S2_MASK                                      0x00ff0000

/* Description		RX_EVM_4_EVM_P4_S3
			
			EVM Pilot 4 Stream 3 (Valid for 40, 80, 160 MHz
			BW)(valid for 4 streams) <legal all>
*/
#define RX_EVM_4_EVM_P4_S3_OFFSET                                    0x00000010
#define RX_EVM_4_EVM_P4_S3_LSB                                       24
#define RX_EVM_4_EVM_P4_S3_MASK                                      0xff000000

/* Description		RX_EVM_5_EVM_P5_S0
			
			EVM Pilot 5 Stream 0 (Valid for 40, 80, 160 MHz
			BW)(valid for 1 stream)  <legal all>
*/
#define RX_EVM_5_EVM_P5_S0_OFFSET                                    0x00000014
#define RX_EVM_5_EVM_P5_S0_LSB                                       0
#define RX_EVM_5_EVM_P5_S0_MASK                                      0x000000ff

/* Description		RX_EVM_5_EVM_P5_S1
			
			EVM Pilot 5 Stream 1 (Valid for 40, 80, 160 MHz
			BW)(valid for 2 streams)  <legal all>
*/
#define RX_EVM_5_EVM_P5_S1_OFFSET                                    0x00000014
#define RX_EVM_5_EVM_P5_S1_LSB                                       8
#define RX_EVM_5_EVM_P5_S1_MASK                                      0x0000ff00

/* Description		RX_EVM_5_EVM_P5_S2
			
			EVM Pilot 5 Stream 2 (Valid for 40, 80, 160 MHz
			BW)(valid for 3 streams)  <legal all>
*/
#define RX_EVM_5_EVM_P5_S2_OFFSET                                    0x00000014
#define RX_EVM_5_EVM_P5_S2_LSB                                       16
#define RX_EVM_5_EVM_P5_S2_MASK                                      0x00ff0000

/* Description		RX_EVM_5_EVM_P5_S3
			
			EVM Pilot 5 Stream 3 (Valid for 40, 80, 160 MHz
			BW)(valid for 4 streams) <legal all>
*/
#define RX_EVM_5_EVM_P5_S3_OFFSET                                    0x00000014
#define RX_EVM_5_EVM_P5_S3_LSB                                       24
#define RX_EVM_5_EVM_P5_S3_MASK                                      0xff000000

/* Description		RX_EVM_6_EVM_P6_S0
			
			EVM Pilot 6 Stream 0 (Valid for 80, 160 MHz BW)(valid
			for 1 stream)  <legal all>
*/
#define RX_EVM_6_EVM_P6_S0_OFFSET                                    0x00000018
#define RX_EVM_6_EVM_P6_S0_LSB                                       0
#define RX_EVM_6_EVM_P6_S0_MASK                                      0x000000ff

/* Description		RX_EVM_6_EVM_P6_S1
			
			EVM Pilot 6 Stream 1 (Valid for 80, 160 MHz BW)(valid
			for 2 streams)  <legal all>
*/
#define RX_EVM_6_EVM_P6_S1_OFFSET                                    0x00000018
#define RX_EVM_6_EVM_P6_S1_LSB                                       8
#define RX_EVM_6_EVM_P6_S1_MASK                                      0x0000ff00

/* Description		RX_EVM_6_EVM_P6_S2
			
			EVM Pilot 6 Stream 2 (Valid for 80, 160 MHz BW)(valid
			for 3 streams)  <legal all>
*/
#define RX_EVM_6_EVM_P6_S2_OFFSET                                    0x00000018
#define RX_EVM_6_EVM_P6_S2_LSB                                       16
#define RX_EVM_6_EVM_P6_S2_MASK                                      0x00ff0000

/* Description		RX_EVM_6_EVM_P6_S3
			
			EVM Pilot 6 Stream 3 (Valid for 80, 160 MHz BW)(valid
			for 4 streams) <legal all>
*/
#define RX_EVM_6_EVM_P6_S3_OFFSET                                    0x00000018
#define RX_EVM_6_EVM_P6_S3_LSB                                       24
#define RX_EVM_6_EVM_P6_S3_MASK                                      0xff000000

/* Description		RX_EVM_7_EVM_P7_S0
			
			EVM Pilot 7 Stream 0 (Valid for 80, 160 MHz BW)(valid
			for 1 stream)  <legal all>
*/
#define RX_EVM_7_EVM_P7_S0_OFFSET                                    0x0000001c
#define RX_EVM_7_EVM_P7_S0_LSB                                       0
#define RX_EVM_7_EVM_P7_S0_MASK                                      0x000000ff

/* Description		RX_EVM_7_EVM_P7_S1
			
			EVM Pilot 7 Stream 1 (Valid for 80, 160 MHz BW)(valid
			for 2 streams)  <legal all>
*/
#define RX_EVM_7_EVM_P7_S1_OFFSET                                    0x0000001c
#define RX_EVM_7_EVM_P7_S1_LSB                                       8
#define RX_EVM_7_EVM_P7_S1_MASK                                      0x0000ff00

/* Description		RX_EVM_7_EVM_P7_S2
			
			EVM Pilot 7 Stream 2 (Valid for 80, 160 MHz BW)(valid
			for 3 streams)  <legal all>
*/
#define RX_EVM_7_EVM_P7_S2_OFFSET                                    0x0000001c
#define RX_EVM_7_EVM_P7_S2_LSB                                       16
#define RX_EVM_7_EVM_P7_S2_MASK                                      0x00ff0000

/* Description		RX_EVM_7_EVM_P7_S3
			
			EVM Pilot 7 Stream 3 (Valid for 80, 160 MHz BW)(valid
			for 4 streams) <legal all>
*/
#define RX_EVM_7_EVM_P7_S3_OFFSET                                    0x0000001c
#define RX_EVM_7_EVM_P7_S3_LSB                                       24
#define RX_EVM_7_EVM_P7_S3_MASK                                      0xff000000

/* Description		RX_EVM_8_EVM_P8_S0
			
			EVM Pilot 8 Stream 0 (Valid for 160 MHz BW)(valid for 1
			stream) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_8_EVM_P8_S0_OFFSET                                    0x00000020
#define RX_EVM_8_EVM_P8_S0_LSB                                       0
#define RX_EVM_8_EVM_P8_S0_MASK                                      0x000000ff

/* Description		RX_EVM_8_EVM_P8_S1
			
			EVM Pilot 8 Stream 1 (Valid for 160 MHz BW)(valid for 2
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_8_EVM_P8_S1_OFFSET                                    0x00000020
#define RX_EVM_8_EVM_P8_S1_LSB                                       8
#define RX_EVM_8_EVM_P8_S1_MASK                                      0x0000ff00

/* Description		RX_EVM_8_EVM_P8_S2
			
			EVM Pilot 8 Stream 2 (Valid for 160 MHz BW)(valid for 3
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_8_EVM_P8_S2_OFFSET                                    0x00000020
#define RX_EVM_8_EVM_P8_S2_LSB                                       16
#define RX_EVM_8_EVM_P8_S2_MASK                                      0x00ff0000

/* Description		RX_EVM_8_EVM_P8_S3
			
			EVM Pilot 8 Stream 3 (Valid for 160 MHz BW)(valid for 4
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_8_EVM_P8_S3_OFFSET                                    0x00000020
#define RX_EVM_8_EVM_P8_S3_LSB                                       24
#define RX_EVM_8_EVM_P8_S3_MASK                                      0xff000000

/* Description		RX_EVM_9_EVM_P9_S0
			
			EVM Pilot 9 Stream 0 (Valid for 160 MHz BW)(valid for 1
			stream) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_9_EVM_P9_S0_OFFSET                                    0x00000024
#define RX_EVM_9_EVM_P9_S0_LSB                                       0
#define RX_EVM_9_EVM_P9_S0_MASK                                      0x000000ff

/* Description		RX_EVM_9_EVM_P9_S1
			
			EVM Pilot 9 Stream 1 (Valid for 160 MHz BW)(valid for 2
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_9_EVM_P9_S1_OFFSET                                    0x00000024
#define RX_EVM_9_EVM_P9_S1_LSB                                       8
#define RX_EVM_9_EVM_P9_S1_MASK                                      0x0000ff00

/* Description		RX_EVM_9_EVM_P9_S2
			
			EVM Pilot 9 Stream 2 (Valid for 160 MHz BW)(valid for 3
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_9_EVM_P9_S2_OFFSET                                    0x00000024
#define RX_EVM_9_EVM_P9_S2_LSB                                       16
#define RX_EVM_9_EVM_P9_S2_MASK                                      0x00ff0000

/* Description		RX_EVM_9_EVM_P9_S3
			
			EVM Pilot 9 Stream 3 (Valid for 160 MHz BW)(valid for 4
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_9_EVM_P9_S3_OFFSET                                    0x00000024
#define RX_EVM_9_EVM_P9_S3_LSB                                       24
#define RX_EVM_9_EVM_P9_S3_MASK                                      0xff000000

/* Description		RX_EVM_10_EVM_P10_S0
			
			EVM Pilot 10 Stream 0 (Valid for 160 MHz BW)(valid for 1
			stream) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_10_EVM_P10_S0_OFFSET                                  0x00000028
#define RX_EVM_10_EVM_P10_S0_LSB                                     0
#define RX_EVM_10_EVM_P10_S0_MASK                                    0x000000ff

/* Description		RX_EVM_10_EVM_P10_S1
			
			EVM Pilot 10 Stream 1 (Valid for 160 MHz BW)(valid for 2
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_10_EVM_P10_S1_OFFSET                                  0x00000028
#define RX_EVM_10_EVM_P10_S1_LSB                                     8
#define RX_EVM_10_EVM_P10_S1_MASK                                    0x0000ff00

/* Description		RX_EVM_10_EVM_P10_S2
			
			EVM Pilot 10 Stream 2 (Valid for 160 MHz BW)(valid for 3
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_10_EVM_P10_S2_OFFSET                                  0x00000028
#define RX_EVM_10_EVM_P10_S2_LSB                                     16
#define RX_EVM_10_EVM_P10_S2_MASK                                    0x00ff0000

/* Description		RX_EVM_10_EVM_P10_S3
			
			EVM Pilot 10 Stream 3 (Valid for 160 MHz BW)(valid for 4
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_10_EVM_P10_S3_OFFSET                                  0x00000028
#define RX_EVM_10_EVM_P10_S3_LSB                                     24
#define RX_EVM_10_EVM_P10_S3_MASK                                    0xff000000

/* Description		RX_EVM_11_EVM_P11_S0
			
			EVM Pilot 11 Stream 0 (Valid for 160 MHz BW)(valid for 1
			stream) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_11_EVM_P11_S0_OFFSET                                  0x0000002c
#define RX_EVM_11_EVM_P11_S0_LSB                                     0
#define RX_EVM_11_EVM_P11_S0_MASK                                    0x000000ff

/* Description		RX_EVM_11_EVM_P11_S1
			
			EVM Pilot 11 Stream 1 (Valid for 160 MHz BW)(valid for 2
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_11_EVM_P11_S1_OFFSET                                  0x0000002c
#define RX_EVM_11_EVM_P11_S1_LSB                                     8
#define RX_EVM_11_EVM_P11_S1_MASK                                    0x0000ff00

/* Description		RX_EVM_11_EVM_P11_S2
			
			EVM Pilot 11 Stream 2 (Valid for 160 MHz BW)(valid for 3
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_11_EVM_P11_S2_OFFSET                                  0x0000002c
#define RX_EVM_11_EVM_P11_S2_LSB                                     16
#define RX_EVM_11_EVM_P11_S2_MASK                                    0x00ff0000

/* Description		RX_EVM_11_EVM_P11_S3
			
			EVM Pilot 11 Stream 3 (Valid for 160 MHz BW)(valid for 4
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_11_EVM_P11_S3_OFFSET                                  0x0000002c
#define RX_EVM_11_EVM_P11_S3_LSB                                     24
#define RX_EVM_11_EVM_P11_S3_MASK                                    0xff000000

/* Description		RX_EVM_12_EVM_P12_S0
			
			EVM Pilot 12 Stream 0 (Valid for 160 MHz BW)(valid for 1
			stream) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_12_EVM_P12_S0_OFFSET                                  0x00000030
#define RX_EVM_12_EVM_P12_S0_LSB                                     0
#define RX_EVM_12_EVM_P12_S0_MASK                                    0x000000ff

/* Description		RX_EVM_12_EVM_P12_S1
			
			EVM Pilot 12 Stream 1 (Valid for 160 MHz BW)(valid for 2
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_12_EVM_P12_S1_OFFSET                                  0x00000030
#define RX_EVM_12_EVM_P12_S1_LSB                                     8
#define RX_EVM_12_EVM_P12_S1_MASK                                    0x0000ff00

/* Description		RX_EVM_12_EVM_P12_S2
			
			EVM Pilot 12 Stream 2 (Valid for 160 MHz BW)(valid for 3
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_12_EVM_P12_S2_OFFSET                                  0x00000030
#define RX_EVM_12_EVM_P12_S2_LSB                                     16
#define RX_EVM_12_EVM_P12_S2_MASK                                    0x00ff0000

/* Description		RX_EVM_12_EVM_P12_S3
			
			EVM Pilot 12 Stream 3 (Valid for 160 MHz BW)(valid for 4
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_12_EVM_P12_S3_OFFSET                                  0x00000030
#define RX_EVM_12_EVM_P12_S3_LSB                                     24
#define RX_EVM_12_EVM_P12_S3_MASK                                    0xff000000

/* Description		RX_EVM_13_EVM_P13_S0
			
			EVM Pilot 13 Stream 0 (Valid for 160 MHz BW)(valid for 1
			stream) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_13_EVM_P13_S0_OFFSET                                  0x00000034
#define RX_EVM_13_EVM_P13_S0_LSB                                     0
#define RX_EVM_13_EVM_P13_S0_MASK                                    0x000000ff

/* Description		RX_EVM_13_EVM_P13_S1
			
			EVM Pilot 13 Stream 1 (Valid for 160 MHz BW)(valid for 2
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_13_EVM_P13_S1_OFFSET                                  0x00000034
#define RX_EVM_13_EVM_P13_S1_LSB                                     8
#define RX_EVM_13_EVM_P13_S1_MASK                                    0x0000ff00

/* Description		RX_EVM_13_EVM_P13_S2
			
			EVM Pilot 13 Stream 2 (Valid for 160 MHz BW)(valid for 3
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_13_EVM_P13_S2_OFFSET                                  0x00000034
#define RX_EVM_13_EVM_P13_S2_LSB                                     16
#define RX_EVM_13_EVM_P13_S2_MASK                                    0x00ff0000

/* Description		RX_EVM_13_EVM_P13_S3
			
			EVM Pilot 13 Stream 3 (Valid for 160 MHz BW)(valid for 4
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_13_EVM_P13_S3_OFFSET                                  0x00000034
#define RX_EVM_13_EVM_P13_S3_LSB                                     24
#define RX_EVM_13_EVM_P13_S3_MASK                                    0xff000000

/* Description		RX_EVM_14_EVM_P14_S0
			
			EVM Pilot 14 Stream 0 (Valid for 160 MHz BW)(valid for 1
			stream) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_14_EVM_P14_S0_OFFSET                                  0x00000038
#define RX_EVM_14_EVM_P14_S0_LSB                                     0
#define RX_EVM_14_EVM_P14_S0_MASK                                    0x000000ff

/* Description		RX_EVM_14_EVM_P14_S1
			
			EVM Pilot 14 Stream 1 (Valid for 160 MHz BW)(valid for 2
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_14_EVM_P14_S1_OFFSET                                  0x00000038
#define RX_EVM_14_EVM_P14_S1_LSB                                     8
#define RX_EVM_14_EVM_P14_S1_MASK                                    0x0000ff00

/* Description		RX_EVM_14_EVM_P14_S2
			
			EVM Pilot 14 Stream 2 (Valid for 160 MHz BW)(valid for 3
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_14_EVM_P14_S2_OFFSET                                  0x00000038
#define RX_EVM_14_EVM_P14_S2_LSB                                     16
#define RX_EVM_14_EVM_P14_S2_MASK                                    0x00ff0000

/* Description		RX_EVM_14_EVM_P14_S3
			
			EVM Pilot 14 Stream 3 (Valid for 160 MHz BW)(valid for 4
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_14_EVM_P14_S3_OFFSET                                  0x00000038
#define RX_EVM_14_EVM_P14_S3_LSB                                     24
#define RX_EVM_14_EVM_P14_S3_MASK                                    0xff000000

/* Description		RX_EVM_15_EVM_P15_S0
			
			EVM Pilot 15 Stream 0 (Valid for 160 MHz BW)(valid for 1
			stream) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_15_EVM_P15_S0_OFFSET                                  0x0000003c
#define RX_EVM_15_EVM_P15_S0_LSB                                     0
#define RX_EVM_15_EVM_P15_S0_MASK                                    0x000000ff

/* Description		RX_EVM_15_EVM_P15_S1
			
			EVM Pilot 15 Stream 1 (Valid for 160 MHz BW)(valid for 2
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_15_EVM_P15_S1_OFFSET                                  0x0000003c
#define RX_EVM_15_EVM_P15_S1_LSB                                     8
#define RX_EVM_15_EVM_P15_S1_MASK                                    0x0000ff00

/* Description		RX_EVM_15_EVM_P15_S2
			
			EVM Pilot 15 Stream 2 (Valid for 160 MHz BW)(valid for 3
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_15_EVM_P15_S2_OFFSET                                  0x0000003c
#define RX_EVM_15_EVM_P15_S2_LSB                                     16
#define RX_EVM_15_EVM_P15_S2_MASK                                    0x00ff0000

/* Description		RX_EVM_15_EVM_P15_S3
			
			EVM Pilot 15 Stream 3 (Valid for 160 MHz BW)(valid for 4
			streams) (Unsupported) (optional) <legal 0>
*/
#define RX_EVM_15_EVM_P15_S3_OFFSET                                  0x0000003c
#define RX_EVM_15_EVM_P15_S3_LSB                                     24
#define RX_EVM_15_EVM_P15_S3_MASK                                    0xff000000


#endif // _RX_EVM_H_
