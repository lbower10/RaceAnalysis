##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=c1020a01Lab3
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/bower/OneDrive/Documents/c1020a01Lab3
ProjectPath            :=C:/Users/bower/OneDrive/Documents/c1020a01Lab3/c1020a01Lab3
IntermediateDirectory  :=../build-$(ConfigurationName)/c1020a01Lab3
OutDir                 :=../build-$(ConfigurationName)/c1020a01Lab3
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=bower
Date                   :=16/03/2022
CodeLitePath           :=C:/CodeLite
LinkerName             :=C:/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/g++.exe
SharedObjectLinkerName :=C:/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/ar.exe rcu
CXX      := C:/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/g++.exe
CC       := C:/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\CodeLite
Objects0=../build-$(ConfigurationName)/c1020a01Lab3/racer.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/c1020a01Lab3/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/c1020a01Lab3/timeStamp.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/c1020a01Lab3/sensor.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/c1020a01Lab3/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\c1020a01Lab3" mkdir "..\build-$(ConfigurationName)\c1020a01Lab3"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\c1020a01Lab3" mkdir "..\build-$(ConfigurationName)\c1020a01Lab3"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/c1020a01Lab3/.d:
	@if not exist "..\build-$(ConfigurationName)\c1020a01Lab3" mkdir "..\build-$(ConfigurationName)\c1020a01Lab3"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/c1020a01Lab3/racer.cpp$(ObjectSuffix): racer.cpp ../build-$(ConfigurationName)/c1020a01Lab3/racer.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/bower/OneDrive/Documents/c1020a01Lab3/c1020a01Lab3/racer.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/racer.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/c1020a01Lab3/racer.cpp$(DependSuffix): racer.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/c1020a01Lab3/racer.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/c1020a01Lab3/racer.cpp$(DependSuffix) -MM racer.cpp

../build-$(ConfigurationName)/c1020a01Lab3/racer.cpp$(PreprocessSuffix): racer.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/c1020a01Lab3/racer.cpp$(PreprocessSuffix) racer.cpp

../build-$(ConfigurationName)/c1020a01Lab3/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/c1020a01Lab3/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/bower/OneDrive/Documents/c1020a01Lab3/c1020a01Lab3/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/c1020a01Lab3/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/c1020a01Lab3/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/c1020a01Lab3/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/c1020a01Lab3/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/c1020a01Lab3/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/c1020a01Lab3/timeStamp.cpp$(ObjectSuffix): timeStamp.cpp ../build-$(ConfigurationName)/c1020a01Lab3/timeStamp.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/bower/OneDrive/Documents/c1020a01Lab3/c1020a01Lab3/timeStamp.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/timeStamp.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/c1020a01Lab3/timeStamp.cpp$(DependSuffix): timeStamp.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/c1020a01Lab3/timeStamp.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/c1020a01Lab3/timeStamp.cpp$(DependSuffix) -MM timeStamp.cpp

../build-$(ConfigurationName)/c1020a01Lab3/timeStamp.cpp$(PreprocessSuffix): timeStamp.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/c1020a01Lab3/timeStamp.cpp$(PreprocessSuffix) timeStamp.cpp

../build-$(ConfigurationName)/c1020a01Lab3/sensor.cpp$(ObjectSuffix): sensor.cpp ../build-$(ConfigurationName)/c1020a01Lab3/sensor.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/bower/OneDrive/Documents/c1020a01Lab3/c1020a01Lab3/sensor.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sensor.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/c1020a01Lab3/sensor.cpp$(DependSuffix): sensor.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/c1020a01Lab3/sensor.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/c1020a01Lab3/sensor.cpp$(DependSuffix) -MM sensor.cpp

../build-$(ConfigurationName)/c1020a01Lab3/sensor.cpp$(PreprocessSuffix): sensor.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/c1020a01Lab3/sensor.cpp$(PreprocessSuffix) sensor.cpp


-include ../build-$(ConfigurationName)/c1020a01Lab3//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


