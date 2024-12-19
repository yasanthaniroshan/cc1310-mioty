CONTIKI_PROJECT = template
TARGET = cc26x0-cc13x0
BOARD = launchpad/cc1310

LIB_PATH = lib
LIBRARY = mioty.lib

# Change CONTIKI path according to local contiki-ng path in your development env
# CONTIKI = ../contiki-ng
CONTIKI =  $(shell find /home -type d -name "contiki-ng" -print -quit)

ifeq ($(CONTIKI),)
    $(error "Contiki-ng SDK not found. Please set the CONTIKI path.")
endif

include $(CONTIKI)/Makefile.include


# LDFLAGS += $(LIB_PATH)/$(LIBRARY)
TARGET_LIBFILES += $(LIB_PATH)/$(LIBRARY)

CFLAGS += -Iincludes

all: $(CONTIKI_PROJECT)

