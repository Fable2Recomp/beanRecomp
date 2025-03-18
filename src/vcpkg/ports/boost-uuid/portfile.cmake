# Automatically generated by scripts/boost/generate-ports.ps1

vcpkg_from_github(
    OUT_SOURCE_PATH SOURCE_PATH
    REPO boostorg/uuid
    REF boost-${VERSION}
    SHA512 610af13df99c68ba0481507c79f2378511b863a58428d6a431ca8a1365f2c98e192286bbb1a9cd0fb2f0ea1a39934ecbc931da226d60f009d75aec89b1ccaf8a
    HEAD_REF master
)

set(FEATURE_OPTIONS "")
boost_configure_and_install(
    SOURCE_PATH "${SOURCE_PATH}"
    OPTIONS ${FEATURE_OPTIONS}
)
