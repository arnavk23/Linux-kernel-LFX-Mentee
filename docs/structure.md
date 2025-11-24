# Repository Structure

This document describes the layout of the Linux Kernel LFX Mentee repository to help newcomers navigate and understand the codebase.

## Directory Overview

```text
Linux-kernel-LFX-Mentee/
├── .github/                    # GitHub-specific files
│   ├── ISSUE_TEMPLATE/         # Issue templates
│   │   ├── bug_report.md       # Bug report template
│   │   └── feature_request.md  # Feature request template
│   ├── workflows/              # GitHub Actions workflows
│   │   └── basic-checks.yml    # CI for linting and spell check
│   └── PULL_REQUEST_TEMPLATE.md # PR template
├── docs/                       # Documentation
│   └── structure.md            # This file
├── kernel_modules/             # Sample kernel modules
│   ├── hello.c                 # Example "Hello World" kernel module
│   └── Makefile                # Build configuration for modules
├── panic_test/                 # Panic test module
│   └── panic_module.c          # Module that triggers kernel panic for testing
├── patch/                      # Kernel patches
│   ├── accepted_patches/       # Patches that have been accepted upstream
│   └── *.patch                 # Various patch files
├── resource/                   # Learning resources
│   ├── meeting_snippets/       # Meeting notes and snippets
│   └── *.pdf, *.png            # Documentation and screenshots
├── submissions_for_application/# Application submission materials
│   └── submitted_patches/      # Patches submitted for the mentorship application
├── CODE_OF_CONDUCT.md          # Community code of conduct
├── CONTRIBUTING.md             # Contribution guidelines
├── LICENSE                     # MIT License
├── LFX_Mentee_Patch_Report.pdf # Patch report document
├── MAINTAINERS                 # Repository maintainers list
└── README.md                   # Main project documentation
```

## Key Areas

### Kernel-Related Code

The kernel-related code is primarily located in:

- **`kernel_modules/`** - Contains example kernel modules demonstrating basic module development. The `hello.c` file is a classic "Hello World" kernel module example.

- **`panic_test/`** - Contains a module designed to trigger kernel panics for testing purposes. Useful for understanding kernel debugging.

### Patches

All kernel patches are stored in the **`patch/`** directory:

- **Root of `patch/`** - Contains various patch files in standard `git format-patch` format
- **`patch/accepted_patches/`** - Patches that have been accepted into the upstream Linux kernel

### Adding New Patches

When adding new patches:

1. Generate patches using `git format-patch`
2. Name patches descriptively (e.g., `0001-subsystem-fix-description.patch`)
3. Place them in the `patch/` directory
4. Update documentation if necessary

### Resources and Learning Materials

The **`resource/`** directory contains:

- PDF documents with learning materials
- Screenshots and diagrams
- Meeting notes in `meeting_snippets/`

### Application Materials

The **`submissions_for_application/`** directory contains:

- Cover letters and application documents
- Patches submitted as part of the LFX Mentorship application

## For Newcomers

If you're new to this repository, here's a suggested path:

1. **Start with the README** - Get an overview of the project
2. **Read CONTRIBUTING.md** - Understand how to contribute
3. **Explore `kernel_modules/`** - Look at the example kernel modules
4. **Review patches** - See examples of kernel patches in `patch/`
5. **Check resources** - Learn from the materials in `resource/`

## Building Kernel Modules

To build the kernel modules in this repository:

```bash
cd kernel_modules
make
```

**Prerequisites:**

- Linux kernel headers installed
- GCC compiler
- Make build tool

## Questions?

If you have questions about the repository structure:

- Open an issue
- Check existing documentation
- Contact the maintainers listed in [MAINTAINERS](../MAINTAINERS)
