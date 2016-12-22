defmodule Blackboard.PageController do
  use Blackboard.Web, :controller

  def index(conn, _params) do
    render conn, "index.html"
  end
end
