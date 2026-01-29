# Ada- Compiler

This is the modified source code for Jan van Katwijk's Ada- Compiler (pronounced: Ada
minus). Goal of this project is to make the compiler to be build using modern tools.

It was developed in the 1980s at the Delft University of Technology as part of
van Katwijk's PHD project and described extensively in his
[thesis](https://archive.org/details/ada-minus-compiler-1987).

As the name implies, this compiler is for a subset of Ada 83. However, it's a
rather big subset, even including support for tasks. The biggest ommission is
fixed and floating point arithmetic types and operators.

The first commit of this repository contains the source code as I received it
in August 2025. I had reached out to Jan van Katwijk in the context of the [Ada
83 Memory wiki](https://ada83.org). I came across his PHD thesis and wondered
whether he still had the source code for his compiler. He did and sent me the
version of the code from 1995 in which he tried to port the compiler to a
"modern" Linux system. This didn't work out because the code generator targets
TNO's 68000 based Geminix computer.

So this project isn't a simple case of configure, make and run and is at the
moment mostly useful for historic purposes.

## Why is this important?
Most of the Ada83 compilers from the 80s are unavailable to us, since they were
proprietary and a lot of money was involved in the selling and building of
these. A notable exception is the Ada/Ed interpreter which was developed at
NYU. Source code for that system is still available.

Having source code for historic Ada compilers isn't just important for
programming historians, but also for bootstrapping the GNAT compiler, which is
the de facto standard free software Ada compiler supporting the full language.
It was boostrapped using a proprietary Ada compiler, which blocks an
independently-verifiable path from source to binary code. Systems like Ada/Ed
and the Ada- Compiler may play a role in helping provide this path.

## License
As this is a very old project, it was built in the days before open source was
common. I discussed copyrights with Jan van Katwijk and he said that we
shouldn't worry too much about it, since it's a 40 year old project. However,
it's important to have the freedom to study the code and work on it. That's why
I proposed using a free software license. The copyright is attributed to Delft
University of Technology, Jan van Katwijk and the Ada- Compiler contributors
and the code is distributed under the MIT license.

## Notes
Van Katwijk sent me a couple of remarks which might be useful to keep in mind
when studying / working with this code:

- the compiler uses a special version of YACC. It allows more attributes per
  YACC line and has more extensive syntax error handling

- the compiler targets the Portable C Compiler (PCC), which generates the 68000
  instructions

- the Ada- compiler is itself probably needed to generate the tree
  representation for the Standard package

- The error recovery in the "VEYACC" parser is based on a so-called
  "termination" function. The basic idea is that in any reachable state on the
  YACC parser, there exists a sequence of input symbols such that the parse
  terminates normally. Given such a sequence then error recovery is essentially
  finding a "best" match with the remaining input. This can be deleting or
  inserting one or more symbols.  Computing the termination function is as such
  not complicated, but since YACC (and most other parser generators at that
  time) were LALR rather than LR, there were states that were essentially
  combined LR(1) states for which a unique symbol for the termination function
  did not exist, state splitting needed to be done.

  The technique was invented in the late '70-ties by my good friend Johannes
  Roehrich who sadly enough passed away in the late '90-ties

## Updates

- Oct 12 1987 to GMX-PC
- Dec 10 1987 Updates from 11-oct-1987 onward to GMX-PC
- Dec 18 1988 Completely renewed compiler from PC to GMX
- Nov 1995 upgrade to Linux
