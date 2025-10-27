// Copyright Caleex Games

using UnrealBuildTool;
using System.Collections.Generic;

public class RPGPrototypeEditorTarget : TargetRules
{
	public RPGPrototypeEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "RPGPrototype" } );
	}
}
