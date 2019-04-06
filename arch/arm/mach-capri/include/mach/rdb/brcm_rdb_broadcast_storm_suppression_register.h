/************************************************************************************************/
/*                                                                                              */
/*  Copyright 2012  Broadcom Corporation                                                        */
/*                                                                                              */
/*     Unless you and Broadcom execute a separate written software license agreement governing  */
/*     use of this software, this software is licensed to you under the terms of the GNU        */
/*     General Public License version 2 (the GPL), available at                                 */
/*                                                                                              */
/*          http://www.broadcom.com/licenses/GPLv2.php                                          */
/*                                                                                              */
/*     with the following added to such license:                                                */
/*                                                                                              */
/*     As a special exception, the copyright holders of this software give you permission to    */
/*     link this software with independent modules, and to copy and distribute the resulting    */
/*     executable under terms of your choice, provided that you also meet, for each linked      */
/*     independent module, the terms and conditions of the license of that module.              */
/*     An independent module is a module which is not derived from this software.  The special  */
/*     exception does not apply to any modifications of the software.                           */
/*                                                                                              */
/*     Notwithstanding the above, under no circumstances may you combine this software in any   */
/*     way with any other Broadcom software provided under a license other than the GPL,        */
/*     without Broadcom's express prior written consent.                                        */
/*                                                                                              */
/*     Date     : Generated on 3/20/2012 13:8:57                                             */
/*     RDB file : /projects/CHIP/revA0                                                                   */
/************************************************************************************************/

#ifndef __BRCM_RDB_BROADCAST_STORM_SUPPRESSION_REGISTER_H__
#define __BRCM_RDB_BROADCAST_STORM_SUPPRESSION_REGISTER_H__

#define BROADCAST_STORM_SUPPRESSION_REGISTER_INGRESS_RATE_CONTROL_CONFIGURATION_REGISTER_OFFSET 0x00000000
#define BROADCAST_STORM_SUPPRESSION_REGISTER_INGRESS_RATE_CONTROL_CONFIGURATION_REGISTER_TYPE UInt32
#define BROADCAST_STORM_SUPPRESSION_REGISTER_INGRESS_RATE_CONTROL_CONFIGURATION_REGISTER_RESERVED_MASK 0xFFF80000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_INGRESS_RATE_CONTROL_CONFIGURATION_REGISTER_XLENEN_SHIFT 18
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_INGRESS_RATE_CONTROL_CONFIGURATION_REGISTER_XLENEN_MASK 0x00040000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_INGRESS_RATE_CONTROL_CONFIGURATION_REGISTER_RATE_TYPE1_SHIFT 17
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_INGRESS_RATE_CONTROL_CONFIGURATION_REGISTER_RATE_TYPE1_MASK 0x00020000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_INGRESS_RATE_CONTROL_CONFIGURATION_REGISTER_DROP_EN1_SHIFT 16
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_INGRESS_RATE_CONTROL_CONFIGURATION_REGISTER_DROP_EN1_MASK 0x00010000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_INGRESS_RATE_CONTROL_CONFIGURATION_REGISTER_PKT_MSK1_SHIFT 9
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_INGRESS_RATE_CONTROL_CONFIGURATION_REGISTER_PKT_MSK1_MASK 0x0000FE00
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_INGRESS_RATE_CONTROL_CONFIGURATION_REGISTER_RATE_TYPE0_SHIFT 8
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_INGRESS_RATE_CONTROL_CONFIGURATION_REGISTER_RATE_TYPE0_MASK 0x00000100
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_INGRESS_RATE_CONTROL_CONFIGURATION_REGISTER_DROP_EN0_SHIFT 7
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_INGRESS_RATE_CONTROL_CONFIGURATION_REGISTER_DROP_EN0_MASK 0x00000080
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_INGRESS_RATE_CONTROL_CONFIGURATION_REGISTER_PKT_MSK0_SHIFT 0
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_INGRESS_RATE_CONTROL_CONFIGURATION_REGISTER_PKT_MSK0_MASK 0x0000007F

#define BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_OFFSET 0x00000080
#define BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_TYPE UInt32
#define BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_RESERVED_MASK 0xE0000000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_STORM_SUPPRESSION_SHIFT 28
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_STORM_SUPPRESSION_MASK 0x10000000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_RSV_MULITCAST_SUPPRESSION_SHIFT 27
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_RSV_MULITCAST_SUPPRESSION_MASK 0x08000000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_BROADCAST_SUPPRESSION_SHIFT 26
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_BROADCAST_SUPPRESSION_MASK 0x04000000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_MULTICAST_SUPPRESSION_SHIFT 25
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_MULTICAST_SUPPRESSION_MASK 0x02000000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_ENABL_DLF_UPPRESSION_SHIFT 24
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_ENABL_DLF_UPPRESSION_MASK 0x01000000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_BUCKET1_SHIFT 23
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_BUCKET1_MASK 0x00800000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_BUCKET0_SHIFT 22
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_BUCKET0_MASK 0x00400000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_1_SIZE_SHIFT 19
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_1_SIZE_MASK 0x00380000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_1_REFRESH_COUNT_SHIFT 11
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_1_REFRESH_COUNT_MASK 0x0007F800
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_0_SIZE_SHIFT 8
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_0_SIZE_MASK 0x00000700
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_0_REFRESH_COUNT_SHIFT 0
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_0_REFRESH_COUNT_MASK 0x000000FF

#define BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_OFFSET 0x000000A0
#define BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_TYPE UInt32
#define BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_RESERVED_MASK 0xE0000000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_STORM_SUPPRESSION_SHIFT 28
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_STORM_SUPPRESSION_MASK 0x10000000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_RSV_MULITCAST_SUPPRESSION_SHIFT 27
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_RSV_MULITCAST_SUPPRESSION_MASK 0x08000000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_BROADCAST_SUPPRESSION_SHIFT 26
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_BROADCAST_SUPPRESSION_MASK 0x04000000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_MULTICAST_SUPPRESSION_SHIFT 25
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_MULTICAST_SUPPRESSION_MASK 0x02000000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_ENABL_DLF_UPPRESSION_SHIFT 24
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_ENABL_DLF_UPPRESSION_MASK 0x01000000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_BUCKET1_SHIFT 23
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_BUCKET1_MASK 0x00800000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_BUCKET0_SHIFT 22
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_BUCKET0_MASK 0x00400000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_1_SIZE_SHIFT 19
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_1_SIZE_MASK 0x00380000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_1_REFRESH_COUNT_SHIFT 11
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_1_REFRESH_COUNT_MASK 0x0007F800
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_0_SIZE_SHIFT 8
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_0_SIZE_MASK 0x00000700
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_0_REFRESH_COUNT_SHIFT 0
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_0_REFRESH_COUNT_MASK 0x000000FF

#define BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_OFFSET 0x00000180
#define BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_TYPE UInt32
#define BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_RESERVED_MASK 0xE0000000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_STORM_SUPPRESSION_SHIFT 28
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_STORM_SUPPRESSION_MASK 0x10000000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_RSV_MULITCAST_SUPPRESSION_SHIFT 27
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_RSV_MULITCAST_SUPPRESSION_MASK 0x08000000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_BROADCAST_SUPPRESSION_SHIFT 26
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_BROADCAST_SUPPRESSION_MASK 0x04000000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_MULTICAST_SUPPRESSION_SHIFT 25
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_MULTICAST_SUPPRESSION_MASK 0x02000000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_ENABL_DLF_UPPRESSION_SHIFT 24
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_ENABL_DLF_UPPRESSION_MASK 0x01000000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_BUCKET1_SHIFT 23
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_BUCKET1_MASK 0x00800000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_BUCKET0_SHIFT 22
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_ENABLE_BUCKET0_MASK 0x00400000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_1_SIZE_SHIFT 19
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_1_SIZE_MASK 0x00380000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_1_REFRESH_COUNT_SHIFT 11
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_1_REFRESH_COUNT_MASK 0x0007F800
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_0_SIZE_SHIFT 8
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_0_SIZE_MASK 0x00000700
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_0_REFRESH_COUNT_SHIFT 0
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_RECEIVE_RATE_CONTROL_REGISTER_BUCKET_0_REFRESH_COUNT_MASK 0x000000FF

#define BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_SUPPRESSED_PACKET_DROP_COUNT_REGISTER_OFFSET 0x00000280
#define BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_SUPPRESSED_PACKET_DROP_COUNT_REGISTER_TYPE UInt32
#define BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_SUPPRESSED_PACKET_DROP_COUNT_REGISTER_RESERVED_MASK 0x00000000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_SUPPRESSED_PACKET_DROP_COUNT_REGISTER_PACKET_DROPPED_COUNT_SHIFT 0
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_SUPPRESSED_PACKET_DROP_COUNT_REGISTER_PACKET_DROPPED_COUNT_MASK 0xFFFFFFFF

#define BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_SUPPRESSED_PACKET_DROP_COUNT_REGISTER_OFFSET 0x000002A0
#define BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_SUPPRESSED_PACKET_DROP_COUNT_REGISTER_TYPE UInt32
#define BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_SUPPRESSED_PACKET_DROP_COUNT_REGISTER_RESERVED_MASK 0x00000000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_SUPPRESSED_PACKET_DROP_COUNT_REGISTER_PACKET_DROPPED_COUNT_SHIFT 0
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_SUPPRESSED_PACKET_DROP_COUNT_REGISTER_PACKET_DROPPED_COUNT_MASK 0xFFFFFFFF

#define BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_SUPPRESSED_PACKET_DROP_COUNT_REGISTER_OFFSET 0x00000380
#define BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_SUPPRESSED_PACKET_DROP_COUNT_REGISTER_TYPE UInt32
#define BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_SUPPRESSED_PACKET_DROP_COUNT_REGISTER_RESERVED_MASK 0x00000000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_SUPPRESSED_PACKET_DROP_COUNT_REGISTER_PACKET_DROPPED_COUNT_SHIFT 0
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_SUPPRESSED_PACKET_DROP_COUNT_REGISTER_PACKET_DROPPED_COUNT_MASK 0xFFFFFFFF

#define BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_EGRESS_RATE_CONTROL_CONFIGURATION_OFFSET 0x00000400
#define BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_EGRESS_RATE_CONTROL_CONFIGURATION_TYPE UInt16
#define BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_EGRESS_RATE_CONTROL_CONFIGURATION_RESERVED_MASK 0x0000F000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_EGRESS_RATE_CONTROL_CONFIGURATION_ERC_EN_SHIFT 11
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_EGRESS_RATE_CONTROL_CONFIGURATION_ERC_EN_MASK 0x00000800
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_EGRESS_RATE_CONTROL_CONFIGURATION_BKT_SIZE_SHIFT 8
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_EGRESS_RATE_CONTROL_CONFIGURATION_BKT_SIZE_MASK 0x00000700
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_EGRESS_RATE_CONTROL_CONFIGURATION_RFSH_CNT_SHIFT 0
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_0_EGRESS_RATE_CONTROL_CONFIGURATION_RFSH_CNT_MASK 0x000000FF

#define BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_EGRESS_RATE_CONTROL_CONFIGURATION_OFFSET 0x00000410
#define BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_EGRESS_RATE_CONTROL_CONFIGURATION_TYPE UInt16
#define BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_EGRESS_RATE_CONTROL_CONFIGURATION_RESERVED_MASK 0x0000F000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_EGRESS_RATE_CONTROL_CONFIGURATION_ERC_EN_SHIFT 11
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_EGRESS_RATE_CONTROL_CONFIGURATION_ERC_EN_MASK 0x00000800
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_EGRESS_RATE_CONTROL_CONFIGURATION_BKT_SIZE_SHIFT 8
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_EGRESS_RATE_CONTROL_CONFIGURATION_BKT_SIZE_MASK 0x00000700
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_EGRESS_RATE_CONTROL_CONFIGURATION_RFSH_CNT_SHIFT 0
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_PORT_1_EGRESS_RATE_CONTROL_CONFIGURATION_RFSH_CNT_MASK 0x000000FF

#define BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_EGRESS_RATE_CONTROL_CONFIGURATION_OFFSET 0x00000480
#define BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_EGRESS_RATE_CONTROL_CONFIGURATION_TYPE UInt16
#define BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_EGRESS_RATE_CONTROL_CONFIGURATION_RESERVED_MASK 0x0000F000
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_EGRESS_RATE_CONTROL_CONFIGURATION_ERC_EN_SHIFT 11
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_EGRESS_RATE_CONTROL_CONFIGURATION_ERC_EN_MASK 0x00000800
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_EGRESS_RATE_CONTROL_CONFIGURATION_BKT_SIZE_SHIFT 8
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_EGRESS_RATE_CONTROL_CONFIGURATION_BKT_SIZE_MASK 0x00000700
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_EGRESS_RATE_CONTROL_CONFIGURATION_RFSH_CNT_SHIFT 0
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_PORT_EGRESS_RATE_CONTROL_CONFIGURATION_RFSH_CNT_MASK 0x000000FF

#define BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_EGRESS_RATE_CONTROL_CONFIGURATION_OFFSET 0x00000600
#define BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_EGRESS_RATE_CONTROL_CONFIGURATION_TYPE UInt8
#define BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_EGRESS_RATE_CONTROL_CONFIGURATION_RESERVED_MASK 0x000000C0
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_EGRESS_RATE_CONTROL_CONFIGURATION_RATE_INDEX_SHIFT 0
#define    BROADCAST_STORM_SUPPRESSION_REGISTER_IMP_EGRESS_RATE_CONTROL_CONFIGURATION_RATE_INDEX_MASK 0x0000003F

#endif /* __BRCM_RDB_BROADCAST_STORM_SUPPRESSION_REGISTER_H__ */


