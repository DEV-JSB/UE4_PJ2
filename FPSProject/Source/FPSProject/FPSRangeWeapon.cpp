// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSRangeWeapon.h"

AFPSRangeWeapon::AFPSRangeWeapon()
{

}
AFPSRangeWeapon::AFPSRangeWeapon(const int32 ammo)
	:MaxAmmo(ammo)
	,CurrentAmmo(ammo)
{

}