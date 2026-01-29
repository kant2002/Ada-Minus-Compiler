Structure of the source files
=============================

I did not document the actual purpose of each component for now.


- Folder lib
  Helpful binaries for codegen1. From what I see only ldfile should be there
- Folder src\codegen1
  Executables s68
- Folder src\cgyaccsrc
  Executable cgyacc
- Folder src\codegen2
  Executables cg68
- Folder src\veyacc
  Executable veyacc
- Folder src\libvy
  Static library libvy.a
- Folder src\treetool
  Executable treetool
- Folder src\view
  Static library viewlib.a
  Executables adarm newadalib rmadalib adaload printlib printview printcdb
- Folder src\h
  Header file tree.h
- Folder src\front
  Executables ada_front
- Folder src\cg
  !! Missing !!
  Executable file ada_cg
- Folder src\adadep
  Executables adaparse adadep
- Folder src\rt
  Ada runtime in assembly and C
  Static library daslib.a
  Object files dasexit.o, dasrt0.o, std_ps.o
  Assembly files dasrt0.s dastaskrt0.s
  Tree file(???) std_ps.t
- Folder src\standard
  Static library std.a
- Folder src\amdb
  Executables amdb

| Folder name          | Folder purpose | List of artifacts |
|----------------------|---------------|-------------------|
| lib                  | Helpful binaries for codegen1.  | Executable ldfile |
| src/codegen1         |               | s68 |
| src/cgyaccsrc        |               | cgyacc |
| src/codegen2         |               | cg68 |
| src/veyacc           |               | veyacc |
| src/libvy            |               | libvy.a |
| src/treetool         |               | treetool |
| src/view             |               | viewlib.a, adarm, newadalib, rmadalib, adaload, printlib, printview, printcdb |
| src/h                |               | tree.h |
| src/front            |               | ada_front |
| src/cg               | Code generation | ada_cg (missing folder) |
| src/adadep           |               | adaparse, adadep |
| src/rt               |               | daslib.a, dasexit.o, dasrt0.o, std_ps.o, dasrt0.s, dastaskrt0.s, std_ps.t |
| src/standard         |               | std.a |
| src/amdb             |               | amdb |
