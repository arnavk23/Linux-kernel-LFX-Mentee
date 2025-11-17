# Blog site preview

This is a minimal static preview site for the `blog_post.md` content.

How to preview locally:

1. From the repository root, start a simple HTTP server:

```bash
# Python 3
python3 -m http.server 8000
```

2. Open your browser at:

http://localhost:8000/site/

Notes:
- The page uses a client-side markdown renderer (marked.js) to fetch `blog_post.md`. Browsers block `fetch()` for local file:// requests, so the directory should be served via a local HTTP server as described above.
- If you prefer pre-rendered HTML, I can convert `blog_post.md` to HTML server-side and update `index.html` accordingly.
