# Contributing to Linux Kernel LFX Mentee

Thank you for your interest in contributing to this repository! This document provides guidelines and instructions for contributing.

## Table of Contents

- [Code of Conduct](#code-of-conduct)
- [How to Contribute](#how-to-contribute)
- [Opening Issues](#opening-issues)
- [Proposing Pull Requests](#proposing-pull-requests)
- [Commit Message Conventions](#commit-message-conventions)
- [Branch Naming](#branch-naming)
- [Running Local Checks](#running-local-checks)
- [Code Review Process](#code-review-process)

## Code of Conduct

Please read and follow our [Code of Conduct](CODE_OF_CONDUCT.md) to help maintain a welcoming and inclusive community.

## How to Contribute

1. Fork the repository
2. Create a new branch for your changes
3. Make your changes
4. Run local checks
5. Submit a pull request

## Opening Issues

When opening an issue, please:

- Use the appropriate issue template (bug report or feature request)
- Provide a clear and descriptive title
- Include as much relevant information as possible
- For bugs, include steps to reproduce, expected behavior, and actual behavior
- For feature requests, explain the use case and potential benefits

## Proposing Pull Requests

### PR Checklist

Before submitting a pull request, ensure:

- [ ] Your code follows the existing style and conventions
- [ ] You have tested your changes locally
- [ ] All automated checks pass (see `.github/workflows/basic-checks.yml`)
- [ ] Documentation has been updated if needed
- [ ] Commit messages follow the conventions below
- [ ] Your branch is up-to-date with the target branch
- [ ] You have added a sign-off to your commits if required

### Sign-off

For contributions that require sign-off, use:

```bash
git commit -s -m "Your commit message"
```

This adds a `Signed-off-by` line to your commit message.

If you're co-authoring a commit, add:

```text
Co-authored-by: Name <email@example.com>
```

## Commit Message Conventions

Write clear and meaningful commit messages:

### Format

```text
<short summary> (50 chars or less)

<optional body - explain what and why, not how>

<optional footer - sign-off, references>
```

### Example

```text
docs: add contribution guidelines

Add CONTRIBUTING.md with instructions for:
- Opening issues
- Submitting pull requests
- Running local checks
- Commit message conventions

Signed-off-by: Your Name <your.email@example.com>
```

### Guidelines

- Use the imperative mood ("add feature" not "added feature")
- Keep the first line under 50 characters
- Separate subject from body with a blank line
- Use the body to explain what and why vs. how
- Reference issues and pull requests in the footer

## Branch Naming

Use descriptive branch names:

- `feature/description` - for new features
- `fix/description` - for bug fixes
- `docs/description` - for documentation changes
- `refactor/description` - for code refactoring
- `test/description` - for adding or updating tests

Examples:

- `feature/add-kernel-module-example`
- `fix/correct-patch-format`
- `docs/update-readme-instructions`

## Running Local Checks

Before submitting a PR, run the automated checks locally:

### Markdown Linting

```bash
# Install markdownlint-cli
npm install -g markdownlint-cli

# Run markdown linting
markdownlint '**/*.md' --ignore node_modules
```

### Spell Check (Optional)

```bash
# Install cspell
npm install -g cspell

# Run spell check on documentation
cspell "**/*.md" --no-progress
```

These checks are also run automatically via GitHub Actions when you open a PR. See `.github/workflows/basic-checks.yml` for the full CI configuration.

## Code Review Process

1. All PRs require at least one review before merging
2. Address all review comments or explain why you disagree
3. Keep discussions constructive and focused on the code
4. Be patient - maintainers review PRs as time permits
5. Once approved, a maintainer will merge your PR

### What Reviewers Look For

- Code correctness and functionality
- Adherence to project conventions
- Clear and appropriate documentation
- Test coverage where applicable
- No breaking changes to existing functionality

## Questions?

If you have questions about contributing, feel free to:

- Open an issue with your question
- Reach out to the maintainers listed in [MAINTAINERS](MAINTAINERS)

Thank you for contributing!
