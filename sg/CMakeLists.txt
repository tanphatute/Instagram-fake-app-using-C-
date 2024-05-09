cmake_minimum_required(VERSION 3.5)

project(sg VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        signup.cpp
        signup.h
        signup.ui
        menu.cpp
        menu.h
        menu.ui
        searchaccount.cpp
        searchaccount.h
        searchaccount.ui
        updateaccount.cpp
        updateaccount.h
        updateaccount.ui
        updateaccountnext.h updateaccountnext.cpp updateaccountnext.ui
        deleteaccount.h deleteaccount.cpp deleteaccount.ui
        follow.h follow.cpp follow.ui
        messages.h messages.cpp messages.ui
        follower.h follower.cpp follower.ui
        following.h following.cpp following.ui
        recentmessages.h recentmessages.cpp recentmessages.ui
        rateapp.h rateapp.cpp rateapp.ui
        apprating.h apprating.cpp apprating.ui
        rep.h rep.cpp rep.ui
        oldmessages.h oldmessages.cpp oldmessages.ui
        blockuser.h blockuser.cpp blockuser.ui
        blockeduser.h blockeduser.cpp blockeduser.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(sg
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        res.qrc
        signup.h signup.cpp signup.ui
        menu.h menu.cpp menu.ui
        searchaccount.h searchaccount.cpp searchaccount.ui
        updateaccount.h updateaccount.cpp updateaccount.ui
        updateaccountnext.h updateaccountnext.cpp updateaccountnext.ui
        deleteaccount.h deleteaccount.cpp deleteaccount.ui
        follow.h follow.cpp follow.ui
        messages.h messages.cpp messages.ui
        follower.h follower.cpp follower.ui
        following.h following.cpp following.ui
        recentmessages.h recentmessages.cpp recentmessages.ui
        rateapp.h rateapp.cpp rateapp.ui
        apprating.h apprating.cpp apprating.ui
        rep.h rep.cpp rep.ui
        oldmessages.h oldmessages.cpp oldmessages.ui
        blockuser.h blockuser.cpp blockuser.ui
        blockeduser.h blockeduser.cpp blockeduser.ui
        giua.cpp


    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET sg APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(sg SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(sg
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(sg PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.sg)
endif()
set_target_properties(sg PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS sg
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(sg)
endif()
