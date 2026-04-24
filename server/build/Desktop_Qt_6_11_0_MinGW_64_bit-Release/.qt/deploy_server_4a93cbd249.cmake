include("C:/Users/1/Desktop/CheezyRat/server/build/Desktop_Qt_6_11_0_MinGW_64_bit-Release/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/server-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE "C:/Users/1/Desktop/CheezyRat/server/build/Desktop_Qt_6_11_0_MinGW_64_bit-Release/server.exe"
    GENERATE_QT_CONF
)
