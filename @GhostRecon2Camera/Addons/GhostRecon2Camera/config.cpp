class CfgPatches
{
    class My3rdPersonCam
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = { "A3_Characters_F" };
    };
};

class CfgVehicles
{
    class Man;
    class CAManBase: Man
    {
        // extCameraPosition[] = { X, Y, Z };
        // X Values: Postitive move to the left from the center, negative to the right;
        // Y Values: Positive raises the camera (less visible character), negative lowers it;
        // Z Values: Positive moves it forward (zoom), negative moves it back
        extCameraPosition[] = {0.3, -0.05, -1.4};
    };
};
