// Copyright Caleex Games

using UnrealBuildTool;
using System.Collections.Generic;

public class RPGPrototypeTarget : TargetRules
{
	public RPGPrototypeTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "RPGPrototype" } );
	}
}
