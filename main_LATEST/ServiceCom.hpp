#pragma once
/******************************************************************************/
/* File   : ServiceCom.hpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstServiceCom.hpp"
#include "CfgServiceCom.hpp"
#include "ServiceCom_core.hpp"
#include "infServiceCom_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceCom:
      INTERFACES_EXPORTED_COM
      public abstract_module
   ,  public class_ServiceCom_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceCom_Type* lptrConst = (ConstServiceCom_Type*)NULL_PTR;
      infServicePduRClient_Up infServicePduRClient_ServiceCom;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, COM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, COM_CONST,       COM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   COM_CONFIG_DATA, COM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, COM_CODE) DeInitFunction (void);
      FUNC(void, COM_CODE) MainFunction   (void);
      COM_CORE_FUNCTIONALITIES

      FUNC(void, COM_CODE) MainFunctionRx (void);
      FUNC(void, COM_CODE) MainFunctionTx (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServiceCom, COM_VAR) ServiceCom;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

