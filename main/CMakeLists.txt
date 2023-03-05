
set(EXTRA_COMPONENT_DIRS src)

set(SOURCES ./src/main.c
            ./src/wifi.c)

idf_component_register(SRCS ${SOURCES}
                            INCLUDE_DIRS  . inc)