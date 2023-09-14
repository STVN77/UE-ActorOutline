// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorOutline_init() {}
	ACTOROUTLINE_API UFunction* Z_Construct_UDelegateFunction_ActorOutline_OnOutlineChanged__DelegateSignature();
	ACTOROUTLINE_API UFunction* Z_Construct_UDelegateFunction_ActorOutline_OnOutlineDurationFinished__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ActorOutline;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ActorOutline()
	{
		if (!Z_Registration_Info_UPackage__Script_ActorOutline.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ActorOutline_OnOutlineChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ActorOutline_OnOutlineDurationFinished__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ActorOutline",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA3835F80,
				0xE96F2EE4,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ActorOutline.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ActorOutline.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ActorOutline(Z_Construct_UPackage__Script_ActorOutline, TEXT("/Script/ActorOutline"), Z_Registration_Info_UPackage__Script_ActorOutline, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA3835F80, 0xE96F2EE4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
