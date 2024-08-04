// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "homework1/homework1GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodehomework1GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
HOMEWORK1_API UClass* Z_Construct_UClass_Ahomework1GameMode();
HOMEWORK1_API UClass* Z_Construct_UClass_Ahomework1GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_homework1();
// End Cross Module References

// Begin Class Ahomework1GameMode
void Ahomework1GameMode::StaticRegisterNativesAhomework1GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Ahomework1GameMode);
UClass* Z_Construct_UClass_Ahomework1GameMode_NoRegister()
{
	return Ahomework1GameMode::StaticClass();
}
struct Z_Construct_UClass_Ahomework1GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "homework1GameMode.h" },
		{ "ModuleRelativePath", "homework1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ahomework1GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Ahomework1GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_homework1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Ahomework1GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Ahomework1GameMode_Statics::ClassParams = {
	&Ahomework1GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Ahomework1GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_Ahomework1GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Ahomework1GameMode()
{
	if (!Z_Registration_Info_UClass_Ahomework1GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Ahomework1GameMode.OuterSingleton, Z_Construct_UClass_Ahomework1GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Ahomework1GameMode.OuterSingleton;
}
template<> HOMEWORK1_API UClass* StaticClass<Ahomework1GameMode>()
{
	return Ahomework1GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Ahomework1GameMode);
Ahomework1GameMode::~Ahomework1GameMode() {}
// End Class Ahomework1GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_fierc_Documents_Unreal_Projects_homework1_Source_homework1_homework1GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Ahomework1GameMode, Ahomework1GameMode::StaticClass, TEXT("Ahomework1GameMode"), &Z_Registration_Info_UClass_Ahomework1GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Ahomework1GameMode), 2945816842U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fierc_Documents_Unreal_Projects_homework1_Source_homework1_homework1GameMode_h_2313257197(TEXT("/Script/homework1"),
	Z_CompiledInDeferFile_FID_Users_fierc_Documents_Unreal_Projects_homework1_Source_homework1_homework1GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fierc_Documents_Unreal_Projects_homework1_Source_homework1_homework1GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
