/****************************************************************************
 * arch/arm/src/csk6/chip.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __ARCH_ARM_SRC_CSK6_CHIP_H
#define __ARCH_ARM_SRC_CSK6_CHIP_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

/* Include the chip capabilities file */

#include <arch/csk6/chip.h>

/* Include the chip interrupt definition file */

#include <arch/csk6/irq.h>

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define ARMV8M_PERIPHERAL_INTERRUPTS (CSK6_NEXTINT)

#endif /* __ARCH_ARM_SRC_CSK6_CHIP_H */