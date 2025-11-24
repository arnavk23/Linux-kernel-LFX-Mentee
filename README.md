# Linux Kernel LFX Mentee

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![basic-checks](https://github.com/arnavk23/Linux-kernel-LFX-Mentee/actions/workflows/basic-checks.yml/badge.svg)](https://github.com/arnavk23/Linux-kernel-LFX-Mentee/actions/workflows/basic-checks.yml)
[![GitHub issues](https://img.shields.io/github/issues/arnavk23/Linux-kernel-LFX-Mentee)](https://github.com/arnavk23/Linux-kernel-LFX-Mentee/issues)

This repository contains the work and progress of Arnav Kumar during the Linux Kernel mentoring program under the LFX Mentorship initiative.

## Project Summary

The Linux Kernel LFX Mentee project is focused on contributing to the Linux Kernel, understanding its internals, and enhancing various subsystems with real patches and improvements.
This repository serves as a workspace for exploring kernel code, submitting patches, and tracking the mentorship journey.

## Goals

- Learn Linux kernel development best practices
- Contribute patches to the upstream Linux kernel
- Document the learning journey for future mentees
- Build example kernel modules for educational purposes

## Development Status

🚧 **Active Development** - This repository is actively maintained as part of the LFX Mentorship program.

## Language Breakdown

- **C** - Kernel modules and patches
- **Makefile** - Build configuration
- **Markdown** - Documentation
- **Shell** - Build scripts and utilities

## Folder Structure

```text
├── kernel_modules/     # Example kernel modules (Hello World, etc.)
├── panic_test/         # Kernel panic test module
├── patch/              # Kernel patches (accepted and in-progress)
├── resource/           # Learning materials and notes
├── submissions_for_application/  # LFX application materials
├── docs/               # Additional documentation
└── .github/            # GitHub templates and workflows
```

For a detailed description of each directory, see [docs/structure.md](docs/structure.md).

## Getting Started

### Prerequisites

- A Linux-based OS (Ubuntu 22.04+, Fedora 38+, etc.)
- Linux kernel headers installed
- Basic knowledge of Git for version control
- Familiarity with Linux Kernel development process
- Required tools:
  - `gcc` (Linux kernel compatible compiler)
  - `make`
  - `git`
  - `patch`
  - `git send-email` (for submitting patches via email)

### Clone the Repository

```bash
git clone https://github.com/arnavk23/Linux-kernel-LFX-Mentee.git
cd Linux-kernel-LFX-Mentee
```

### Build Kernel Modules

To build the example kernel modules:

```bash
cd kernel_modules
make
```

### Setup Kernel Source (for patch development)

Clone the Linux kernel source:

```bash
git clone https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git
cd linux
```

## Running Local Checks

This repository uses markdown linting to ensure documentation quality. To run checks locally:

```bash
# Install markdownlint-cli
npm install -g markdownlint-cli

# Run markdown linting
markdownlint '**/*.md' --ignore node_modules

# (Optional) Install and run spell check
npm install -g cspell
cspell "**/*.md" --no-progress
```

Automated checks run on every push and pull request via GitHub Actions. See the [basic-checks workflow](.github/workflows/basic-checks.yml) for details.

## How to Contribute

We welcome contributions! Please read our [Contributing Guidelines](CONTRIBUTING.md) before submitting issues or pull requests.

Quick links:

- [Contributing Guidelines](CONTRIBUTING.md)
- [Code of Conduct](CODE_OF_CONDUCT.md)
- [Issue Templates](.github/ISSUE_TEMPLATE/)
- [Pull Request Template](.github/PULL_REQUEST_TEMPLATE.md)

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contact & Maintainers

- **Repository Owner:** [@arnavk23](https://github.com/arnavk23)
- **Email:** maintainers@localhost

For a full list of maintainers, see the [MAINTAINERS](MAINTAINERS) file.

## Acknowledgments

- [Linux Foundation](https://www.linuxfoundation.org/) for the LFX Mentorship program
- Linux kernel community for guidance and reviews
- All contributors to this repository

## Links

- [Issue Tracker](https://github.com/arnavk23/Linux-kernel-LFX-Mentee/issues)
- [Pull Requests](https://github.com/arnavk23/Linux-kernel-LFX-Mentee/pulls)
- [Issue Templates](.github/ISSUE_TEMPLATE/)
- [Documentation](docs/)
