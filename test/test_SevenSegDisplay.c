/************************************************************************//**
 *
 * \file test_SevenSegDisplay.h
 *
 * \brief Test scripts for module SevenSegDisplay to be run with Unity
 *
 * \note
 *
 * \author Gabrielle Trotter 
 * \date 12.1.15
 *
 ****************************************************************************/

/****************************************************************************
 *                              INCLUDE FILES                               *
 ****************************************************************************/
#include "unity.h"
#include "SevenSegDisplay.h"
#include "mock_GPIOHAL.h"

/****************************************************************************
 *                      PRIVATE TYPES and DEFINITIONS                       *
 ****************************************************************************/

/****************************************************************************
 *                              PRIVATE DATA                                *
 ****************************************************************************/

/****************************************************************************
 *                             EXTERNAL DATA                                *
 ****************************************************************************/
extern GPIO_HANDLE SegmentGPIOHandles[8];

/****************************************************************************
 *                     PRIVATE FUNCTION DECLARATIONS                        *
 ****************************************************************************/

/****************************************************************************
 *                     EXPORTED FUNCTION DEFINITIONS                        *
 ****************************************************************************/


void setUp(void)
{
}

void tearDown(void)
{
}

void test_InitFunctionSetsUpAllGPIOPinsCorrectly(void)
{
    GPIO_InitOutputPin_ExpectAndReturn(GPIO_OUTPUT_DEFUALT, &(SegmentGPIOHandles[0]), GPIO_STATUS_SUCCESS); 
    SSD_Init();
}

void test_SegmentACanBeTurnedOn(void)
{
    TEST_FAIL_MESSAGE("Implement me!");
}

void test_SegmentBCanBeTurnedOn(void)
{
    TEST_FAIL_MESSAGE("Implement me!");
}

void test_SegmentCCanBeTurnedOn(void)
{
    TEST_FAIL_MESSAGE("Implement me!");
}

void test_SegmentDCanBeTurnedOn(void)
{
    TEST_FAIL_MESSAGE("Implement me!");
}

void test_SegmentECanBeTurnedOn(void)
{
    TEST_FAIL_MESSAGE("Implement me!");
}

void test_SegmentFCanBeTurnedOn(void)
{
    TEST_FAIL_MESSAGE("Implement me!");
}

void test_SegmentGCanBeTurnedOn(void)
{
    TEST_FAIL_MESSAGE("Implement me!");
}

void test_SegmentDPCanBeTurnedOn(void)
{
    TEST_FAIL_MESSAGE("Implement me!");
}

void test_DisplayCanBeTurnedOff(void)
{
    TEST_FAIL_MESSAGE("Implement me!");
}

/****************************************************************************
 *                     PRIVATE FUNCTION DEFINITIONS                         *
 ****************************************************************************/

/************************************************************************//**
 * \brief
 * \param
 * \return
 ****************************************************************************/

// End of file.
