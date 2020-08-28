## -*- Makefile -*-
##
## User: adair
## Time: Aug 28, 2020 12:26:53 AM
## Makefile created by Oracle Developer Studio.
##
## This file is generated automatically.
##


#### Compiler and tool definitions shared by all build targets #####
CCC = g++
CXX = g++
BASICOPTS = -g
CCFLAGS = $(BASICOPTS)
CXXFLAGS = $(BASICOPTS)
CCADMIN = 


# Define the target directories.
TARGETDIR_sim_u_duck=SimUDuck


all: $(TARGETDIR_sim_u_duck)/sim_u_duck

## Target: sim_u_duck
OBJS_sim_u_duck =  \
	$(TARGETDIR_sim_u_duck)/MiniDuckSimulator.o \
	$(TARGETDIR_sim_u_duck)/MallardDuck.o \
	$(TARGETDIR_sim_u_duck)/Duck.o
USERLIBS_sim_u_duck = $(SYSLIBS_sim_u_duck) 
DEPLIBS_sim_u_duck =  
LDLIBS_sim_u_duck = $(USERLIBS_sim_u_duck)


# Link or archive
$(TARGETDIR_sim_u_duck)/sim_u_duck: $(TARGETDIR_sim_u_duck) $(OBJS_sim_u_duck) $(DEPLIBS_sim_u_duck)
	$(LINK.cc) $(CCFLAGS_sim_u_duck) $(CPPFLAGS_sim_u_duck) -o $@ $(OBJS_sim_u_duck) $(LDLIBS_sim_u_duck)


# Compile source files into .o files
$(TARGETDIR_sim_u_duck)/MiniDuckSimulator.o: $(TARGETDIR_sim_u_duck) src/MiniDuckSimulator.cpp
	$(COMPILE.cc) $(CCFLAGS_sim_u_duck) $(CPPFLAGS_sim_u_duck) -o $@ src/MiniDuckSimulator.cpp

$(TARGETDIR_sim_u_duck)/MallardDuck.o: $(TARGETDIR_sim_u_duck) src/MallardDuck.cpp
	$(COMPILE.cc) $(CCFLAGS_sim_u_duck) $(CPPFLAGS_sim_u_duck) -o $@ src/MallardDuck.cpp

$(TARGETDIR_sim_u_duck)/Duck.o: $(TARGETDIR_sim_u_duck) src/Duck.cpp
	$(COMPILE.cc) $(CCFLAGS_sim_u_duck) $(CPPFLAGS_sim_u_duck) -o $@ src/Duck.cpp



#### Clean target deletes all generated files ####
clean:
	rm -f \
		$(TARGETDIR_sim_u_duck)/sim_u_duck \
		$(TARGETDIR_sim_u_duck)/MiniDuckSimulator.o \
		$(TARGETDIR_sim_u_duck)/MallardDuck.o \
		$(TARGETDIR_sim_u_duck)/Duck.o
	$(CCADMIN)
	rm -f -r $(TARGETDIR_sim_u_duck)


# Create the target directory (if needed)
$(TARGETDIR_sim_u_duck):
	mkdir -p $(TARGETDIR_sim_u_duck)


# Enable dependency checking
.KEEP_STATE:
.KEEP_STATE_FILE:.make.state.GNU-amd64-Linux

