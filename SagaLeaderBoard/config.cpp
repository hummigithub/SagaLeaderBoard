class CfgPatches
{
    class SagaLeaderBoard
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"DZ_Data","DZ_Scripts"};
    };
};

class CfgMods
{
    class SagaLeaderBoard
    {
        dir = "SagaLeaderBoard";
        picture = "";
        action = "";
        hideName = 0;
        hidePicture = 1;
        name = "SagaLeaderBoard";
        credits = "";
        author = "SagaLeaderBoard";
        authorID = "0";
        version = "1.0.0";
        type = "mod";

        dependencies[] = {"Game","World","Mission"};

        class defs
        {
            class coreScriptModule
            {
                files[] = {"SagaLeaderBoard/scripts/1_Core"};
            };
            class gameScriptModule
            {
                files[] = {"SagaLeaderBoard/scripts/3_Game"};
            };
            class worldScriptModule
            {
                files[] = {"SagaLeaderBoard/scripts/4_World"};
            };
            class missionScriptModule
            {
                files[] = {"SagaLeaderBoard/scripts/5_Mission"};
            };
        };
    };
};
